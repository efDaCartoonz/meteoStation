#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, QSettings *settings) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Панель контроля");
    this->parent = parent;
    this->settings = settings;
    timerLogTemp = new QTimer;
    timerLogTemp->setInterval(1*60*1000);
    connect(timerLogTemp, SIGNAL(timeout()), SLOT(whenTimerLogTempTimeout()));
    timerSendCommand = new QTimer;
    timerSendCommand->setInterval(500);
    connect(timerSendCommand, SIGNAL(timeout()), SLOT(whenTimerSendCommandTimeout()));
    timerLimitConnection = new QTimer;
    timerLimitConnection->setInterval(3 * 1000);
    connect(timerLimitConnection, SIGNAL(timeout()), SLOT(whenTimerLimitConnection()));
    manager = new QNetworkAccessManager;
    connect(manager, SIGNAL(finished(QNetworkReply*)), SLOT(whenManagerReplyFinished(QNetworkReply*)));
    statusLabel = new QLabel;
    ui->statusBar->addWidget(statusLabel);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::whenAccessAccept(AutorizationData logined) {
    this->isAdmin = logined.isAdmin;
    readSettings();
    sendStatusCommand();
    ui->stackedWidget->setCurrentIndex(0);
    if (!isAdmin) {
        this->showFullScreen();
        ui->boxSettings->setVisible(false);
        ui->btnSendPulseR01->setVisible(false);
        ui->btnSendPulseR02->setVisible(false);
        ui->btnSendPulseR03->setVisible(false);
        ui->btnSendPulseR04->setVisible(false);
        ui->btnSendPulseR05->setVisible(false);
        ui->btnSendPulseR06->setVisible(false);
        ui->btnChangeIp->setVisible(false);
        ui->editIpDevice->setVisible(false);
    }
    else {
        this->showMaximized();
    }
    timerLogTemp->start();
    timerSendCommand->start();
}

void MainWindow::whenAccessDenied() {
    qApp->exit(1);
}

void MainWindow::readSettings() {
    ui->spinRelPulse01->setValue(settings->value("Pulse/R01", 1).toInt());
    ui->spinRelPulse02->setValue(settings->value("Pulse/R02", 1).toInt());
    ui->spinRelPulse03->setValue(settings->value("Pulse/R03", 1).toInt());
    ui->spinRelPulse04->setValue(settings->value("Pulse/R04", 1).toInt());
    ui->spinRelPulse05->setValue(settings->value("Pulse/R05", 1).toInt());
    ui->spinRelPulse06->setValue(settings->value("Pulse/R06", 1).toInt());
    ui->editMask->setText(settings->value("Address/MS", "255.255.255.0").toString());
    ui->editIpAddr->setText(settings->value("Address/IP", "192.168.0.25").toString());
    ui->editGateWay->setText(settings->value("Address/GW", "192.168.0.1").toString());
    ui->editIpDevice->setText(settings->value("Address/IP", "192.168.0.25").toString());
}

void MainWindow::addStatusCommand() {
    QString httpCommand = QString("http://%0/benuks.htm?lg=admin&ps=%1").arg(
                settings->value("Address/IP", "192.168.0.25").toString(),
                settings->value("Device/Password", "12345678Qaz").toString()
                );
    listNetCommandQueue.append({CT::STATUS, httpCommand});
}

void MainWindow::addPulseCommand(int device) {
    QString httpCommand = QString("http://%0/index.htm?lg=admin&ps=%1&PP0%2=PULS").arg(
                settings->value("Address/IP", "192.168.0.25").toString(),
                settings->value("Device/Password", "12345678Qaz").toString(),
                QString::number(device)
                );
    listNetCommandQueue.append({CT::SENDPULSE, httpCommand});
}

void MainWindow::addPulsePairComand(int device1, int device2) {
    QString httpCommand = QString("http://%0/index.htm?lg=admin&ps=%1&PP0%2=PULS&PP0%3=PULS").arg(
                settings->value("Address/IP", "192.168.0.25").toString(),
                settings->value("Device/Password", "12345678Qaz").toString(),
                QString::number(device1), QString::number(device2)
                );
    listNetCommandQueue.append({CT::SENDPULSE, httpCommand});
}

void MainWindow::addChangeIpConfigCommand(QString oldAddress, QString newAddress) {
    QString httpCommand = QString("http://%0/setting.htm?IP=%1&MS=%2&DG=%3&lg=admin&ps=%4&CD=")
            .arg(oldAddress).arg(newAddress)
            .arg(settings->value("Address/MS", "255.255.255.0").toString())
            .arg(settings->value("Address/GW", "192.168.0.1").toString())
            .arg(settings->value("Device/Password", "12345678Qaz").toString());
    listNetCommandQueue.append({CT::CHANGEADDRESS, httpCommand});
}

void MainWindow::addChangePulseTimingCommand() {
    QString httpCommand = QString("http://%0/setting2.htm?T1=%1&T2=%2&T3=%3&T4=%4&T5=%5&T6=%6&lg=admin&ps=%7")
            .arg(settings->value("Address/IP", "192.168.0.25").toString())
            .arg(settings->value("Pulse/R01", "1").toString())
            .arg(settings->value("Pulse/R02", "1").toString())
            .arg(settings->value("Pulse/R03", "1").toString())
            .arg(settings->value("Pulse/R04", "1").toString())
            .arg(settings->value("Pulse/R05", "1").toString())
            .arg(settings->value("Pulse/R06", "1").toString())
            .arg(settings->value("Device/Password", "12345678Qaz").toString());
    listNetCommandQueue.append({CT::CHANGETIMINGS, httpCommand});
}

void MainWindow::addChangeDevicePwdCommand(QString oldPassword, QString newPassword) {
    QString httpCommand = QString("http://%0/index.htm?lg=admin&ps=%1&lG=admin&pS=%2&LG=admin&PS=%2").arg(
                settings->value("Address/IP", "192.168.0.25").toString(), oldPassword, newPassword);
    listNetCommandQueue.append({CT::CHANGEPASSWORD, httpCommand});
}

void MainWindow::sendStatusCommand() {
//    if (isNetworkBusy) return;
//    isNetworkBusy = true;
//    lastNetworkCommand = CT::STATUS;
//    QUrl urlCmd = QUrl(QString("http://%0/benuks.htm?lg=admin&ps=%1").arg(
//                           settings->value("Address/IP", "192.168.0.25").toString(),
//                           settings->value("Device/Password", "12345678Qaz").toString()
//                           ));
//    QNetworkRequest request(urlCmd);
//    manager->get(request);
}

void MainWindow::normalizeDeviceStatus(QByteArray data) {
    mapDeviceStatus.clear();
    QStringList parsingData = QString(data).remove("\r\n").split(";");
    for (QString param: parsingData) {
        QStringList parsedParam = param.split(":");
        if (parsedParam.length() == 1) continue;
        if (parsedParam.at(1) == "ON") {
            mapDeviceStatus.insert(parsedParam.at(0), 1);
        }
        else if (parsedParam.at(1) == "OFF") {
            mapDeviceStatus.insert(parsedParam.at(0), 0);
        }
        else if (parsedParam.at(0) == "dws") {
            mapDeviceStatus.insert(parsedParam.at(0), int(parsedParam.at(1).toDouble() * 10));
        }
    }
    ui->lblStatusRel01->setText(statusOxygenMessage.arg((mapDeviceStatus.value("gpio01") == 1)?"ON":"OFF", "1", settings->value("Pulse/R01", "1").toString()));
    ui->lblStatusRel02->setText(statusPropaneMessage.arg((mapDeviceStatus.value("gpio02") == 1)?"ON":"OFF", "1", settings->value("Pulse/R02", "1").toString()));
    ui->lblStatusRel03->setText(statusOxygenMessage.arg((mapDeviceStatus.value("gpio03") == 1)?"ON":"OFF", "2", settings->value("Pulse/R03", "1").toString()));
    ui->lblStatusRel04->setText(statusPropaneMessage.arg((mapDeviceStatus.value("gpio04") == 1)?"ON":"OFF", "2", settings->value("Pulse/R04", "1").toString()));
    ui->lblStatusRel05->setText(statusOxygenMessage.arg((mapDeviceStatus.value("gpio05") == 1)?"ON":"OFF", "3", settings->value("Pulse/R05", "1").toString()));
    ui->lblStatusRel06->setText(statusPropaneMessage.arg((mapDeviceStatus.value("gpio06") == 1)?"ON":"OFF", "3", settings->value("Pulse/R06", "1").toString()));
    ui->lblStatusLastData->setText(statusLastDate.arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")));
    ui->lblStatusTemp->setText(statusTemperature.arg(QString::number(double(mapDeviceStatus.value("dws"))/10.0)));
}

bool MainWindow::checkTextOnIpAddress(QString ipAddress, QString errorMsg) {
    QRegExp regularIp("(\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}\\.\\d{1,3})");
    if (regularIp.indexIn(ipAddress) == -1)     {
        writeErr(errorMsg, LT::Warning, this);
        return false;
    }
    for (QString number: ipAddress.split(".")) {
        if (number.toInt() > 255 or number.toInt() < 0) {
            writeErr(errorMsg, LT::Warning, this);
            return false;
        }
    }
    return true;
}

void MainWindow::whenManagerReplyFinished(QNetworkReply *reply) {
    timerLimitConnection->stop();
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray content = reply->readAll();
        switch (lastNetworkCommand) {
        case CT::STATUS:
            normalizeDeviceStatus(content);
            break;
        case CT::SENDPULSE:
            statusLabel->setText("Команда пульс выполнена");
            break;
        case CT::CHANGEADDRESS:
            statusLabel->setText("Команда замены адреса выполнена");
            break;
        case CT::CHANGEPASSWORD:
            statusLabel->setText("Команда замены пароля выполнена");
            break;
        case CT::CHANGETIMINGS:
            statusLabel->setText("Команда замены таймингов пульса выполнена");
            break;
        }
        writeLog(QString("End command type: %0").arg(QString::number(lastNetworkCommand)));
    }
    else {
//        writeErr(QString("Connection error: %0").arg(reply->errorString()), LT::Warning, this);
        writeLog(QString("Connection error: %0").arg(reply->errorString()));
        writeLog(QString("Connection error: %1::%0").arg(reply->errorString(), QString::number(reply->error())), "error");
    }
    reply->deleteLater();
    isNetworkBusy = false;
}

void MainWindow::whenTimerLogTempTimeout() {
    writeLog(QString("outside temperature: %0").arg(QString::number(double(mapDeviceStatus.value("dws"))/10.0)), "temp");
}

void MainWindow::whenTimerSendCommandTimeout() {
    if (isNetworkBusy) {
        return;
    }
    isNetworkBusy = true;
    if (listNetCommandQueue.length() == 0) addStatusCommand();
    WebCommand nowCommand = listNetCommandQueue.first();
    listNetCommandQueue.removeFirst();
    lastNetworkCommand = nowCommand.cmdType;
    writeLog(QString("Send command type: %0").arg(QString::number(lastNetworkCommand)));
    QUrl urlCommand = nowCommand.cmdString;
    QNetworkRequest request(urlCommand);
    lastReply = manager->get(request);
    timerLimitConnection->start();
}

void MainWindow::whenTimerLimitConnection() {
    lastReply->abort();
    isNetworkBusy = false;
    timerLimitConnection->stop();
}

void MainWindow::on_btnSendPulseR01_clicked() {
    addPulseCommand(1);
}

void MainWindow::on_btnSendPulseR02_clicked() {
    addPulseCommand(2);
}

void MainWindow::on_btnSendPulseR03_clicked() {
    addPulseCommand(3);
}

void MainWindow::on_btnSendPulseR04_clicked() {
    addPulseCommand(4);
}

void MainWindow::on_btnSendPulseR05_clicked() {
    addPulseCommand(5);
}

void MainWindow::on_btnSendPulseR06_clicked() {
    addPulseCommand(6);
}

void MainWindow::on_btnRelConfSave_clicked() {
    settings->setValue("Pulse/R01", ui->spinRelPulse01->value());
    settings->setValue("Pulse/R02", ui->spinRelPulse02->value());
    settings->setValue("Pulse/R03", ui->spinRelPulse03->value());
    settings->setValue("Pulse/R04", ui->spinRelPulse04->value());
    settings->setValue("Pulse/R05", ui->spinRelPulse05->value());
    settings->setValue("Pulse/R06", ui->spinRelPulse06->value());
    addChangePulseTimingCommand();
}

void MainWindow::on_btnSaveNetworkSettings_clicked() {
    if (!checkTextOnIpAddress(ui->editIpAddr->text(), "Неверно введён IP адрес устройства")) {
        return;
    }
    if (!checkTextOnIpAddress(ui->editMask->text(), "Неверно введён маски подсети")) {
        return;
    }
    if (!checkTextOnIpAddress(ui->editGateWay->text(), "Неверно введён IP адрес шлюза")) {
        return;
    }
    QString oldIpAddress = settings->value("Address/IP", "192.168.0.25").toString();
    settings->setValue("Address/IP", ui->editIpAddr->text());
    settings->setValue("Address/MS", ui->editMask->text());
    settings->setValue("Address/GW", ui->editGateWay->text());
    addChangeIpConfigCommand(oldIpAddress, settings->value("Address/IP", "192.168.0.25").toString());
}

void MainWindow::on_btnSaveNewPassword_clicked() {
    if (ui->editPwdOld->text() != settings->value("Device/Password", "12345678Qaz").toString()) {
        writeErr("Неверный старый пароль", LT::Warning, this);
        return;
    }
    if (ui->editPwdNew->text() != ui->editPwdNewR->text()) {
        writeErr("Введённые пароли не совпадают", LT::Warning, this);
        return;
    }
    QString oldPassword = settings->value("Device/Password", "12345678Qaz").toString();
    settings->setValue("Device/Password", ui->editPwdNew->text());
    addChangeDevicePwdCommand(oldPassword, settings->value("Device/Password", "12345678Qaz").toString());
}

void MainWindow::on_btnSendPulsePair01_clicked() {
    addPulsePairComand(1, 2);
}

void MainWindow::on_btnSendPulsePair02_clicked() {
    addPulsePairComand(3, 4);
}

void MainWindow::on_btnSendPulsePair03_clicked() {
    addPulsePairComand(5, 6);
}

void MainWindow::on_btnOperateDevice_clicked() {
    ui->stackedWidget->setCurrentIndex(1);
    timerLogTemp->start();
    timerSendCommand->start();
}

void MainWindow::on_btnChangeIp_clicked() {
    if (!checkTextOnIpAddress(ui->editIpDevice->text(), "Неверно введён IP адрес устройства")) {
        return;
    }
    settings->setValue("Address/IP", ui->editIpDevice->text());
}

void MainWindow::on_btnBack_clicked() {
    timerLogTemp->stop();
    timerSendCommand->stop();
    ui->stackedWidget->setCurrentIndex(0);
}
