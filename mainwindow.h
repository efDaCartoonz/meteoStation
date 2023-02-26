#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtNetwork>
#include <QMainWindow>
#include <QSettings>
#include <QRegExp>
#include <QDebug>
#include "dialoglogin.h"
#include "log.h"

const QString statusLastDate = "Данные получены: %0";
const QString statusRelMessage = "Статус состояния реле %1: %0 (пульс %2 сек.)";
const QString statusOxygenMessage = "Состояние клапана кислород эксплойдер %1: %0 (открытие %2 сек.)";
const QString statusPropaneMessage = "Состояние клапана пропан эксплойдер %1: %0 (открытие %2 сек.)";
const QString statusTemperature= "Температура: %0";

namespace CT { // command types
    enum Types {
        STATUS = 0,
        SENDPULSE,
        CHANGEADDRESS,
        CHANGETIMINGS,
        CHANGEPASSWORD
    };
}

struct WebCommand {
    CT::Types cmdType;
    QString cmdString;
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent, QSettings *settings);
    ~MainWindow();

public slots:
    void whenAccessAccept(AutorizationData logined);
    void whenAccessDenied();

private:
    Ui::MainWindow *ui;
    QWidget *parent;
    QSettings *settings;
    QNetworkAccessManager *manager;
    QNetworkReply *lastReply;
    QTcpSocket *socket;
    QTimer *timerLogTemp, *timerSendCommand, *timerLimitConnection;
    QLabel *statusLabel;
    bool isAdmin, isNetworkBusy = false;
    int lastNetworkCommand = -1;
    QList <WebCommand> listNetCommandQueue;
    QMap <QString, int> mapDeviceStatus;

    void readSettings();
    void addStatusCommand();
    void addPulseCommand(int device);
    void addPulsePairComand(int device1, int device2);
    void addChangeIpConfigCommand(QString oldAddress, QString newAddress);
    void addChangePulseTimingCommand();
    void addChangeDevicePwdCommand(QString oldPassword, QString newPassword);
    void sendStatusCommand();
    void normalizeDeviceStatus(QByteArray data);

    bool checkTextOnIpAddress(QString ipAddress, QString errorMsg);

private slots:
    void whenManagerReplyFinished(QNetworkReply *reply);
    void whenTimerLogTempTimeout();
    void whenTimerSendCommandTimeout();
    void whenTimerLimitConnection();
    void on_btnSendPulseR01_clicked();
    void on_btnSendPulseR02_clicked();
    void on_btnSendPulseR03_clicked();
    void on_btnSendPulseR04_clicked();
    void on_btnSendPulseR05_clicked();
    void on_btnSendPulseR06_clicked();
    void on_btnRelConfSave_clicked();
    void on_btnSaveNetworkSettings_clicked();
    void on_btnSaveNewPassword_clicked();
    void on_btnSendPulsePair01_clicked();
    void on_btnSendPulsePair02_clicked();
    void on_btnSendPulsePair03_clicked();
    void on_btnOperateDevice_clicked();
    void on_btnChangeIp_clicked();
    void on_btnBack_clicked();
};

#endif // MAINWINDOW_H
