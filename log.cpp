#include "log.h"

void writeLog(QString message, QString name) {
    QString file_name = qApp->applicationDirPath() + "/log/" + name + "-" + QDateTime::currentDateTime().toString("yyyy-MM-dd") + ".log";
    QFile log_file(file_name);
    QByteArray data;
    data.clear();
    data.append(QDateTime::currentDateTime().toString("yyyy-MM-dd-hh-mm-ss-zzz: "));
    data.append(message);
    data.append("\r\n");
    if (log_file.exists()) {
        log_file.open(QIODevice::Append);
    }
    else {
        log_file.open(QIODevice::WriteOnly);
    }
    log_file.write(data, data.length());
    log_file.close();
}

void beginLog(QString name) {
    QString file_name = qApp->applicationDirPath() + "/log/" + name + "-" + QDateTime::currentDateTime().toString("yyyy-MM-dd") + ".log";
    QFile log_file(file_name);
    QByteArray data;
    data.clear();
    data.append("--------------------------------------------------------\r\n\r\n");
    data.append("--------------------------------------------------------\r\n");
    if (log_file.exists()) {
        log_file.open(QIODevice::Append);
    }
    else {
        log_file.open(QIODevice::WriteOnly);
    }
    log_file.write(data, data.length());
    log_file.close();
}


void protocolLog(QtMsgType type, const QMessageLogContext &context, const QString &msg) {
    QString file_name = qApp->applicationDirPath() + "/log/protocol" + "-" + QDateTime::currentDateTime().toString("yyyy-MM-dd") + ".log";
    QFile log_file(file_name);
    QString date_time = QDateTime::currentDateTime().toString("yyyy-MM-dd-hh-mm-ss-zzz: ");
    if (log_file.exists()) {
        log_file.open(QIODevice::Append);
    }
    else {
        log_file.open(QIODevice::WriteOnly);
    }
    QTextStream out(&log_file);
    switch (type) {
    case QtDebugMsg:
        out << date_time << "Debug: " << msg << ", " << context.file << endl;
        break;
    case QtWarningMsg:
        out << date_time << "Warning: " << msg << ", " << context.file << endl;
        break;
    case QtCriticalMsg:
        out << date_time << "Critical: " << msg << ", " << context.file << endl;
        break;
    case QtFatalMsg:
        out << date_time << "Fatal: " << msg << ", " << context.file << endl;
        abort();
    }
}

void writeErr(QString message, LT::ErrType type, QWidget *parent, QString name) {
    QString file_name = qApp->applicationDirPath() + "/log/" + name + "-" + QDateTime::currentDateTime().toString("yyyy-MM-dd") + ".log";
    QString strMsg = QDateTime::currentDateTime().toString("yyyy-MM-dd-hh-mm-ss-zzz: ");
    QFile log_file(file_name);
    switch (type) {
    case LT::Info:
        QMessageBox::information(parent, "Информация", message);
        strMsg += "INFO: ";
        break;
    case LT::Warning:
        QMessageBox::warning(parent, "Внимание!", message);
        strMsg += "WARNING: ";
        break;
    case LT::Critical:
        QMessageBox::critical(parent, "Ошибка!", message + ".\nОбратитесь к администратору.");
        strMsg += "CRITICAL: ";
        break;
    }
    if (log_file.exists()) {
        log_file.open(QIODevice::Append);
    }
    else {
        log_file.open(QIODevice::WriteOnly);
    }
    if (log_file.isOpen()) {
        QTextStream stream(&log_file);
        stream.setCodec("Windows-1251");
        stream << strMsg << message << "\n";
        stream.flush();
        log_file.close();
    }
}

void setAppCursor(int type) { // 0 - arrow, 1 - wait
    QCursor cursor;
    switch (type) {
    case 0:
        cursor = Qt::ArrowCursor;
        break;
    case 1:
        cursor = Qt::WaitCursor;
        break;
    }
    QApplication::setOverrideCursor(cursor);
}
