#include "dialoglogin.h"
#include "ui_dialoglogin.h"

DialogLogin::DialogLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLogin)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowTitle("Авторизация");
    ui->lblStatus->setVisible(false);
//    ui->btnAutoLogin->setVisible(false);
    fillMapLogins();
}

DialogLogin::~DialogLogin() {
    delete ui;
}

void DialogLogin::fillMapLogins() {
    mapLogins.insert("admin", {"admin", "12345678Qaz", true});
    mapLogins.insert("user", {"user", "123456", false});
}

void DialogLogin::closeEvent(QCloseEvent *event) {
    if (!isLoggined) {
        emit loginDenied();
    }
    event->accept();
}

void DialogLogin::on_btnLogin_clicked() {
    QString entryLoggin = ui->editLogin->text(), entryPassword = ui->editPassword->text();
    if (!mapLogins.keys().contains(entryLoggin)) {
        writeErr(ui->lblStatus->text(), LT::Warning, this);
        ui->editPassword->setText("");
        return;
    }
    if (entryPassword != mapLogins.value(entryLoggin).password) {
        writeErr(ui->lblStatus->text(), LT::Warning, this);
        ui->editPassword->setText("");
        return;
    }
    isLoggined = true;
    emit loginAccept(mapLogins.value(entryLoggin));
    this->close();
}

void DialogLogin::on_btnAutoLogin_clicked() {
    ui->editLogin->setText("admin");
    ui->editPassword->setText("12345678Qaz");
    on_btnLogin_clicked();
}
