/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QLineEdit *editLogin;
    QLineEdit *editPassword;
    QPushButton *btnAutoLogin;
    QPushButton *btnLogin;
    QLabel *lblStatus;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName(QStringLiteral("DialogLogin"));
        DialogLogin->resize(700, 500);
        DialogLogin->setMinimumSize(QSize(700, 500));
        DialogLogin->setMaximumSize(QSize(700, 500));
        QFont font;
        font.setPointSize(16);
        DialogLogin->setFont(font);
        horizontalLayout = new QHBoxLayout(DialogLogin);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        frame = new QFrame(DialogLogin);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(400, 0));
        frame->setMaximumSize(QSize(600, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        editLogin = new QLineEdit(frame);
        editLogin->setObjectName(QStringLiteral("editLogin"));

        verticalLayout->addWidget(editLogin);

        editPassword = new QLineEdit(frame);
        editPassword->setObjectName(QStringLiteral("editPassword"));
        editPassword->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        editPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(editPassword);

        btnAutoLogin = new QPushButton(frame);
        btnAutoLogin->setObjectName(QStringLiteral("btnAutoLogin"));

        verticalLayout->addWidget(btnAutoLogin);

        btnLogin = new QPushButton(frame);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));

        verticalLayout->addWidget(btnLogin);

        lblStatus = new QLabel(frame);
        lblStatus->setObjectName(QStringLiteral("lblStatus"));
        lblStatus->setMaximumSize(QSize(376, 16777215));
        lblStatus->setAlignment(Qt::AlignCenter);
        lblStatus->setWordWrap(true);

        verticalLayout->addWidget(lblStatus);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(frame);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(DialogLogin);

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QApplication::translate("DialogLogin", "Dialog", 0));
        label->setText(QApplication::translate("DialogLogin", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", 0));
        editLogin->setPlaceholderText(QApplication::translate("DialogLogin", "\320\233\320\276\320\263\320\270\320\275", 0));
        editPassword->setPlaceholderText(QApplication::translate("DialogLogin", "\320\237\320\260\321\200\320\276\320\273\321\214", 0));
        btnAutoLogin->setText(QApplication::translate("DialogLogin", "AutoLogonAdmin", 0));
        btnLogin->setText(QApplication::translate("DialogLogin", "\320\222\320\276\320\271\321\202\320\270", 0));
        lblStatus->setText(QApplication::translate("DialogLogin", "\320\235\320\265\320\262\320\265\321\200\320\275\321\213\320\271 \320\273\320\276\320\263\320\270\320\275 \320\270\320\273\320\270 \320\277\320\260\321\200\320\276\320\273\321\214, \320\277\321\200\320\276\320\262\320\265\321\200\321\214\321\202\320\265 \320\262\320\262\320\276\320\264\320\270\320\274\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
