#include "mainwindow.h"
#include "dialoglogin.h"
#include <QObject>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    beginLog();
    writeLog("Application start");
    QSettings *settings = new QSettings("config", QSettings::IniFormat);
    writeLog("Read application settings");
    DialogLogin *dialogLogin = new DialogLogin(nullptr);
    writeLog("Initialize DialogLogin");
    MainWindow *mainWindow = new MainWindow(nullptr, settings);
    writeLog("Initialize MainWindow");
    mainWindow->connect(dialogLogin, SIGNAL(loginAccept(AutorizationData)), SLOT(whenAccessAccept(AutorizationData)));
    mainWindow->connect(dialogLogin, SIGNAL(loginDenied()), SLOT(whenAccessDenied()));
    dialogLogin->showFullScreen();
    int result = a.exec();
    writeLog(QString("Application end with code: %0").arg(QString::number(result)));
    return result;
}
