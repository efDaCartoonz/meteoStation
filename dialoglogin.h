#ifndef DIALOGLOGIN_H
#define DIALOGLOGIN_H

#include <QDialog>
#include <QDebug>
#include <QMap>
#include <QCloseEvent>
#include "log.h"

namespace Ui {
class DialogLogin;
}

struct AutorizationData {
    QString login;
    QString password;
    bool isAdmin;
};

class DialogLogin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLogin(QWidget *parent = 0);
    ~DialogLogin();

private:
    Ui::DialogLogin *ui;
    QWidget *parent;
    bool isLoggined = false;

    QMap <QString, AutorizationData> mapLogins;

    void fillMapLogins();

private slots:
    void closeEvent(QCloseEvent *event);
    void on_btnLogin_clicked();
    void on_btnAutoLogin_clicked();

signals:
    void loginAccept(AutorizationData logined);
    void loginDenied();
};

#endif // DIALOGLOGIN_H
