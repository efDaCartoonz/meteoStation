/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageSelector;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_7;
    QPushButton *btnOperateDevice;
    QLabel *lblLinkStatus;
    QLineEdit *editIpDevice;
    QPushButton *btnChangeIp;
    QSpacerItem *verticalSpacer_4;
    QWidget *pageDevice;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_14;
    QGroupBox *boxStatus;
    QFormLayout *formLayout_4;
    QLabel *lblStatusRel01;
    QLabel *lblStatusTemp;
    QLabel *lblStatusRel02;
    QLabel *lblStatusRel03;
    QLabel *lblStatusRel04;
    QLabel *lblStatusRel05;
    QLabel *lblStatusRel06;
    QLabel *lblStatusLastData;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *btnBack;
    QGroupBox *boxCommands;
    QGridLayout *gridLayout;
    QPushButton *btnSendPulseR04;
    QPushButton *btnSendPulseR03;
    QPushButton *btnSendPulsePair01;
    QPushButton *btnSendPulseR05;
    QPushButton *btnSendPulseR01;
    QPushButton *btnSendPulseR02;
    QPushButton *btnSendPulseR06;
    QPushButton *btnSendPulsePair03;
    QPushButton *btnSendPulsePair02;
    QGroupBox *boxSettings;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *editIpAddr;
    QLineEdit *editMask;
    QLineEdit *editGateWay;
    QPushButton *btnSaveNetworkSettings;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QFormLayout *formLayout;
    QLabel *lblRelName01;
    QSpinBox *spinRelPulse01;
    QLabel *lblRelName02;
    QSpinBox *spinRelPulse02;
    QLabel *lblRelName03;
    QSpinBox *spinRelPulse03;
    QLabel *lblRelName04;
    QSpinBox *spinRelPulse04;
    QLabel *lblRelName05;
    QSpinBox *spinRelPulse05;
    QLabel *lblRelName06;
    QSpinBox *spinRelPulse06;
    QPushButton *btnRelConfSave;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_3;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QLineEdit *editPwdOld;
    QLabel *label_6;
    QLineEdit *editPwdNew;
    QLabel *label_7;
    QLineEdit *editPwdNewR;
    QFrame *line;
    QLabel *lblPwdError;
    QSpacerItem *verticalSpacer;
    QPushButton *btnSaveNewPassword;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1574, 664);
        QFont font;
        font.setPointSize(16);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageSelector = new QWidget();
        pageSelector->setObjectName(QStringLiteral("pageSelector"));
        gridLayout_2 = new QGridLayout(pageSelector);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);

        frame_4 = new QFrame(pageSelector);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_4);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        btnOperateDevice = new QPushButton(frame_4);
        btnOperateDevice->setObjectName(QStringLiteral("btnOperateDevice"));

        verticalLayout_7->addWidget(btnOperateDevice);

        lblLinkStatus = new QLabel(frame_4);
        lblLinkStatus->setObjectName(QStringLiteral("lblLinkStatus"));
        lblLinkStatus->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lblLinkStatus);

        editIpDevice = new QLineEdit(frame_4);
        editIpDevice->setObjectName(QStringLiteral("editIpDevice"));

        verticalLayout_7->addWidget(editIpDevice);

        btnChangeIp = new QPushButton(frame_4);
        btnChangeIp->setObjectName(QStringLiteral("btnChangeIp"));

        verticalLayout_7->addWidget(btnChangeIp);


        gridLayout_2->addWidget(frame_4, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 2, 0, 1, 1);

        stackedWidget->addWidget(pageSelector);
        pageDevice = new QWidget();
        pageDevice->setObjectName(QStringLiteral("pageDevice"));
        verticalLayout_3 = new QVBoxLayout(pageDevice);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(pageDevice);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -196, 1551, 1173));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_2->addWidget(label_14);

        boxStatus = new QGroupBox(scrollAreaWidgetContents);
        boxStatus->setObjectName(QStringLiteral("boxStatus"));
        formLayout_4 = new QFormLayout(boxStatus);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        lblStatusRel01 = new QLabel(boxStatus);
        lblStatusRel01->setObjectName(QStringLiteral("lblStatusRel01"));
        lblStatusRel01->setMinimumSize(QSize(900, 0));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, lblStatusRel01);

        lblStatusTemp = new QLabel(boxStatus);
        lblStatusTemp->setObjectName(QStringLiteral("lblStatusTemp"));
        lblStatusTemp->setWordWrap(true);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lblStatusTemp);

        lblStatusRel02 = new QLabel(boxStatus);
        lblStatusRel02->setObjectName(QStringLiteral("lblStatusRel02"));
        lblStatusRel02->setMinimumSize(QSize(600, 0));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, lblStatusRel02);

        lblStatusRel03 = new QLabel(boxStatus);
        lblStatusRel03->setObjectName(QStringLiteral("lblStatusRel03"));
        lblStatusRel03->setMinimumSize(QSize(600, 0));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, lblStatusRel03);

        lblStatusRel04 = new QLabel(boxStatus);
        lblStatusRel04->setObjectName(QStringLiteral("lblStatusRel04"));
        lblStatusRel04->setMinimumSize(QSize(600, 0));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, lblStatusRel04);

        lblStatusRel05 = new QLabel(boxStatus);
        lblStatusRel05->setObjectName(QStringLiteral("lblStatusRel05"));
        lblStatusRel05->setMinimumSize(QSize(600, 0));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, lblStatusRel05);

        lblStatusRel06 = new QLabel(boxStatus);
        lblStatusRel06->setObjectName(QStringLiteral("lblStatusRel06"));
        lblStatusRel06->setMinimumSize(QSize(600, 0));

        formLayout_4->setWidget(6, QFormLayout::LabelRole, lblStatusRel06);

        lblStatusLastData = new QLabel(boxStatus);
        lblStatusLastData->setObjectName(QStringLiteral("lblStatusLastData"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, lblStatusLastData);

        label = new QLabel(boxStatus);
        label->setObjectName(QStringLiteral("label"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, label);

        label_8 = new QLabel(boxStatus);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, label_8);

        label_9 = new QLabel(boxStatus);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, label_9);

        label_10 = new QLabel(boxStatus);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_4->setWidget(5, QFormLayout::FieldRole, label_10);

        label_11 = new QLabel(boxStatus);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_4->setWidget(6, QFormLayout::FieldRole, label_11);

        label_12 = new QLabel(boxStatus);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_4->setWidget(8, QFormLayout::FieldRole, label_12);

        label_13 = new QLabel(boxStatus);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_4->setWidget(7, QFormLayout::FieldRole, label_13);

        btnBack = new QPushButton(boxStatus);
        btnBack->setObjectName(QStringLiteral("btnBack"));

        formLayout_4->setWidget(8, QFormLayout::LabelRole, btnBack);


        verticalLayout_2->addWidget(boxStatus);

        boxCommands = new QGroupBox(scrollAreaWidgetContents);
        boxCommands->setObjectName(QStringLiteral("boxCommands"));
        gridLayout = new QGridLayout(boxCommands);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnSendPulseR04 = new QPushButton(boxCommands);
        btnSendPulseR04->setObjectName(QStringLiteral("btnSendPulseR04"));

        gridLayout->addWidget(btnSendPulseR04, 7, 0, 1, 1);

        btnSendPulseR03 = new QPushButton(boxCommands);
        btnSendPulseR03->setObjectName(QStringLiteral("btnSendPulseR03"));

        gridLayout->addWidget(btnSendPulseR03, 5, 2, 1, 1);

        btnSendPulsePair01 = new QPushButton(boxCommands);
        btnSendPulsePair01->setObjectName(QStringLiteral("btnSendPulsePair01"));

        gridLayout->addWidget(btnSendPulsePair01, 8, 0, 1, 1);

        btnSendPulseR05 = new QPushButton(boxCommands);
        btnSendPulseR05->setObjectName(QStringLiteral("btnSendPulseR05"));

        gridLayout->addWidget(btnSendPulseR05, 7, 1, 1, 1);

        btnSendPulseR01 = new QPushButton(boxCommands);
        btnSendPulseR01->setObjectName(QStringLiteral("btnSendPulseR01"));

        gridLayout->addWidget(btnSendPulseR01, 5, 0, 1, 1);

        btnSendPulseR02 = new QPushButton(boxCommands);
        btnSendPulseR02->setObjectName(QStringLiteral("btnSendPulseR02"));

        gridLayout->addWidget(btnSendPulseR02, 5, 1, 1, 1);

        btnSendPulseR06 = new QPushButton(boxCommands);
        btnSendPulseR06->setObjectName(QStringLiteral("btnSendPulseR06"));

        gridLayout->addWidget(btnSendPulseR06, 7, 2, 1, 1);

        btnSendPulsePair03 = new QPushButton(boxCommands);
        btnSendPulsePair03->setObjectName(QStringLiteral("btnSendPulsePair03"));

        gridLayout->addWidget(btnSendPulsePair03, 8, 2, 1, 1);

        btnSendPulsePair02 = new QPushButton(boxCommands);
        btnSendPulsePair02->setObjectName(QStringLiteral("btnSendPulsePair02"));

        gridLayout->addWidget(btnSendPulsePair02, 8, 1, 1, 1);


        verticalLayout_2->addWidget(boxCommands);

        boxSettings = new QGroupBox(scrollAreaWidgetContents);
        boxSettings->setObjectName(QStringLiteral("boxSettings"));
        horizontalLayout = new QHBoxLayout(boxSettings);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(boxSettings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        formLayout_2 = new QFormLayout(frame_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        editIpAddr = new QLineEdit(frame_2);
        editIpAddr->setObjectName(QStringLiteral("editIpAddr"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, editIpAddr);

        editMask = new QLineEdit(frame_2);
        editMask->setObjectName(QStringLiteral("editMask"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, editMask);

        editGateWay = new QLineEdit(frame_2);
        editGateWay->setObjectName(QStringLiteral("editGateWay"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, editGateWay);


        verticalLayout_6->addWidget(frame_2);

        btnSaveNetworkSettings = new QPushButton(groupBox);
        btnSaveNetworkSettings->setObjectName(QStringLiteral("btnSaveNetworkSettings"));

        verticalLayout_6->addWidget(btnSaveNetworkSettings);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(boxSettings);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        frame = new QFrame(groupBox_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        lblRelName01 = new QLabel(frame);
        lblRelName01->setObjectName(QStringLiteral("lblRelName01"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblRelName01);

        spinRelPulse01 = new QSpinBox(frame);
        spinRelPulse01->setObjectName(QStringLiteral("spinRelPulse01"));
        spinRelPulse01->setMinimumSize(QSize(0, 0));
        spinRelPulse01->setMaximumSize(QSize(16777215, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, spinRelPulse01);

        lblRelName02 = new QLabel(frame);
        lblRelName02->setObjectName(QStringLiteral("lblRelName02"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lblRelName02);

        spinRelPulse02 = new QSpinBox(frame);
        spinRelPulse02->setObjectName(QStringLiteral("spinRelPulse02"));
        spinRelPulse02->setMinimumSize(QSize(0, 0));
        spinRelPulse02->setMaximumSize(QSize(16777215, 16777215));

        formLayout->setWidget(1, QFormLayout::FieldRole, spinRelPulse02);

        lblRelName03 = new QLabel(frame);
        lblRelName03->setObjectName(QStringLiteral("lblRelName03"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lblRelName03);

        spinRelPulse03 = new QSpinBox(frame);
        spinRelPulse03->setObjectName(QStringLiteral("spinRelPulse03"));
        spinRelPulse03->setMinimumSize(QSize(0, 0));
        spinRelPulse03->setMaximumSize(QSize(16777215, 16777215));

        formLayout->setWidget(2, QFormLayout::FieldRole, spinRelPulse03);

        lblRelName04 = new QLabel(frame);
        lblRelName04->setObjectName(QStringLiteral("lblRelName04"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lblRelName04);

        spinRelPulse04 = new QSpinBox(frame);
        spinRelPulse04->setObjectName(QStringLiteral("spinRelPulse04"));
        spinRelPulse04->setMinimumSize(QSize(0, 0));
        spinRelPulse04->setMaximumSize(QSize(16777215, 16777215));

        formLayout->setWidget(3, QFormLayout::FieldRole, spinRelPulse04);

        lblRelName05 = new QLabel(frame);
        lblRelName05->setObjectName(QStringLiteral("lblRelName05"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lblRelName05);

        spinRelPulse05 = new QSpinBox(frame);
        spinRelPulse05->setObjectName(QStringLiteral("spinRelPulse05"));
        spinRelPulse05->setMinimumSize(QSize(0, 0));
        spinRelPulse05->setMaximumSize(QSize(16777215, 16777215));

        formLayout->setWidget(4, QFormLayout::FieldRole, spinRelPulse05);

        lblRelName06 = new QLabel(frame);
        lblRelName06->setObjectName(QStringLiteral("lblRelName06"));

        formLayout->setWidget(5, QFormLayout::LabelRole, lblRelName06);

        spinRelPulse06 = new QSpinBox(frame);
        spinRelPulse06->setObjectName(QStringLiteral("spinRelPulse06"));
        spinRelPulse06->setMinimumSize(QSize(0, 0));
        spinRelPulse06->setMaximumSize(QSize(16777215, 16777215));

        formLayout->setWidget(5, QFormLayout::FieldRole, spinRelPulse06);


        verticalLayout_4->addWidget(frame);

        btnRelConfSave = new QPushButton(groupBox_2);
        btnRelConfSave->setObjectName(QStringLiteral("btnRelConfSave"));

        verticalLayout_4->addWidget(btnRelConfSave);


        horizontalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(boxSettings);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        frame_3 = new QFrame(groupBox_3);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        formLayout_3 = new QFormLayout(frame_3);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        editPwdOld = new QLineEdit(frame_3);
        editPwdOld->setObjectName(QStringLiteral("editPwdOld"));
        editPwdOld->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, editPwdOld);

        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_6);

        editPwdNew = new QLineEdit(frame_3);
        editPwdNew->setObjectName(QStringLiteral("editPwdNew"));
        editPwdNew->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, editPwdNew);

        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_7);

        editPwdNewR = new QLineEdit(frame_3);
        editPwdNewR->setObjectName(QStringLiteral("editPwdNewR"));
        editPwdNewR->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, editPwdNewR);

        line = new QFrame(frame_3);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setMidLineWidth(1);
        line->setFrameShape(QFrame::HLine);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, line);


        verticalLayout_5->addWidget(frame_3);

        lblPwdError = new QLabel(groupBox_3);
        lblPwdError->setObjectName(QStringLiteral("lblPwdError"));

        verticalLayout_5->addWidget(lblPwdError);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        btnSaveNewPassword = new QPushButton(groupBox_3);
        btnSaveNewPassword->setObjectName(QStringLiteral("btnSaveNewPassword"));

        verticalLayout_5->addWidget(btnSaveNewPassword);


        horizontalLayout->addWidget(groupBox_3);


        verticalLayout_2->addWidget(boxSettings);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        stackedWidget->addWidget(pageDevice);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1574, 43));
        menuBar->setFont(font);
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        btnOperateDevice->setText(QApplication::translate("MainWindow", "\320\232\320\236\320\240\320\224\320\236\320\235", 0));
        lblLinkStatus->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201: -", 0));
        btnChangeIp->setText(QApplication::translate("MainWindow", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\260\320\264\321\200\320\265\321\201", 0));
        label_14->setText(QApplication::translate("MainWindow", "\320\237\321\203\320\275\320\272\321\202 \320\262\320\276\320\267\320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217 - \320\232\320\276\321\200\320\264\320\276\320\275", 0));
        boxStatus->setTitle(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201", 0));
        lblStatusRel01->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\272\320\273\320\260\320\277\320\260\320\275\320\260 \320\272\320\270\321\201\320\273\320\276\321\200\320\276\320\264 \321\215\320\272\321\201\320\277\320\273\320\276\320\271\320\264\320\265\321\200 %1: %0 (\320\276\321\202\320\272\321\200\321\213\321\202\320\270\320\265 %2 \321\201\320\265\320\272.)", 0));
        lblStatusTemp->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260: %0", 0));
        lblStatusRel02->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\217 \321\200\320\265\320\273\320\265 %1: %0 (\320\277\321\203\320\273\321\214\321\201 %2 \321\201\320\265\320\272.)", 0));
        lblStatusRel03->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\217 \321\200\320\265\320\273\320\265 %1: %0 (\320\277\321\203\320\273\321\214\321\201 %2 \321\201\320\265\320\272.)", 0));
        lblStatusRel04->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\217 \321\200\320\265\320\273\320\265 %1: %0 (\320\277\321\203\320\273\321\214\321\201 %2 \321\201\320\265\320\272.)", 0));
        lblStatusRel05->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\217 \321\200\320\265\320\273\320\265 %1: %0 (\320\277\321\203\320\273\321\214\321\201 %2 \321\201\320\265\320\272.)", 0));
        lblStatusRel06->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\217 \321\200\320\265\320\273\320\265 %1: %0 (\320\277\321\203\320\273\321\214\321\201 %2 \321\201\320\265\320\272.)", 0));
        lblStatusLastData->setText(QApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\321\213: %0", 0));
        label->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\262\320\265\321\202\321\200\320\260: - \320\274/\321\201", 0));
        label_8->setText(QApplication::translate("MainWindow", "\320\222\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214: - %", 0));
        label_9->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\273\320\275\320\265\321\207\320\275\320\260\321\217 \320\277\320\260\320\275\320\265\320\273\321\214: - \320\222", 0));
        label_10->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\200\321\217\320\264 \320\220\320\232\320\221: - \320\222", 0));
        label_11->setText(QApplication::translate("MainWindow", "\320\224\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\272\320\270\321\201\320\273\320\276\321\200\320\276\320\264\320\260 \321\200\320\265\320\267\320\265\321\200\320\262\321\203\320\260\321\200: - \320\261\320\260\321\200", 0));
        label_12->setText(QApplication::translate("MainWindow", "\320\224\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\320\277\320\260\320\275\320\260: - \320\261\320\260\321\200", 0));
        label_13->setText(QApplication::translate("MainWindow", "\320\224\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\272\320\270\321\201\320\273\320\276\321\200\320\276\320\264\320\260 \320\272\320\276\320\275\321\202\321\203\321\200: - \320\261\320\260\321\200", 0));
        btnBack->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", 0));
        boxCommands->setTitle(QApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", 0));
        btnSendPulseR04->setText(QApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202 \321\200\320\265\320\273\320\265 4", 0));
        btnSendPulseR03->setText(QApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202 \321\200\320\265\320\273\320\265 3", 0));
        btnSendPulsePair01->setText(QApplication::translate("MainWindow", "\320\220\320\222 \321\215\320\272\321\201\320\277\320\273\320\276\320\271\320\264\320\265\321\200 1", 0));
        btnSendPulseR05->setText(QApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202 \321\200\320\265\320\273\320\265 5", 0));
        btnSendPulseR01->setText(QApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202 \321\200\320\265\320\273\320\265 1", 0));
        btnSendPulseR02->setText(QApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202 \321\200\320\265\320\273\320\265 2", 0));
        btnSendPulseR06->setText(QApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202 \321\200\320\265\320\273\320\265 6", 0));
        btnSendPulsePair03->setText(QApplication::translate("MainWindow", "\320\220\320\222 \321\215\320\272\321\201\320\277\320\273\320\276\320\271\320\264\320\265\321\200 3", 0));
        btnSendPulsePair02->setText(QApplication::translate("MainWindow", "\320\220\320\222 \321\215\320\272\321\201\320\277\320\273\320\276\320\271\320\264\320\265\321\200 2", 0));
        boxSettings->setTitle(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\241\320\265\321\202\320\265\320\262\321\213\320\265 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0));
        label_2->setText(QApplication::translate("MainWindow", "IP \320\260\320\264\321\200\320\265\321\201", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\201\320\272\320\260 \320\277\320\276\320\264\321\201\320\265\321\202\320\270", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\250\320\273\321\216\320\267", 0));
        btnSaveNetworkSettings->setText(QApplication::translate("MainWindow", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\321\200\320\262\320\260\320\273\321\213 \321\200\320\260\320\261\320\276\321\202\321\213", 0));
        lblRelName01->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\273\320\265 1", 0));
        lblRelName02->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\273\320\265 2", 0));
        lblRelName03->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\273\320\265 3", 0));
        lblRelName04->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\273\320\265 4", 0));
        lblRelName05->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\273\320\265 5", 0));
        lblRelName06->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\273\320\265 6", 0));
        btnRelConfSave->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", 0));
        label_5->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\213\320\271", 0));
        label_6->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271", 0));
        label_7->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\262\321\202\320\276\321\200", 0));
        lblPwdError->setText(QString());
        btnSaveNewPassword->setText(QApplication::translate("MainWindow", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
