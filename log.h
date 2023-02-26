#ifndef LOG_H
#define LOG_H

#include <QtCore>
#include <QString>
#include <QFile>
#include <QDateTime>
#include <QMessageBox>
#include <QApplication>

namespace LT{
enum ErrType {
    Info = 0,
    Warning,
    Critical,
};
}

void writeLog(QString message, QString name = "main");
void writeErr(QString message, LT::ErrType type, QWidget *parent = nullptr, QString name = "main");
void beginLog(QString name = "main");
void protocolLog(QtMsgType type, const QMessageLogContext &context, const QString &msg);
void setAppCursor(int type);

#endif // LOG_H
