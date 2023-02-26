#-------------------------------------------------
#
# Project created by QtCreator 2023-02-24T11:41:29
# check push on github
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = meteoStation
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialoglogin.cpp \
    log.cpp

HEADERS  += mainwindow.h \
    dialoglogin.h \
    log.h

FORMS    += mainwindow.ui \
    dialoglogin.ui

DISTFILES += \
    htmlCommands

RESOURCES += \
    resources.qrc
