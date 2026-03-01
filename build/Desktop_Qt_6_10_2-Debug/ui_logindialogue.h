/********************************************************************************
** Form generated from reading UI file 'logindialogue.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOGUE_H
#define UI_LOGINDIALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginDialogue
{
public:
    QPushButton *btnLogInConfirm;
    QPushButton *btnLogInCancel;
    QLabel *lblLogInTitle;
    QLabel *lblUsername;
    QLabel *lblPassword;
    QLineEdit *lePassword;
    QLineEdit *leUsername;

    void setupUi(QDialog *loginDialogue)
    {
        if (loginDialogue->objectName().isEmpty())
            loginDialogue->setObjectName("loginDialogue");
        loginDialogue->resize(400, 300);
        btnLogInConfirm = new QPushButton(loginDialogue);
        btnLogInConfirm->setObjectName("btnLogInConfirm");
        btnLogInConfirm->setGeometry(QRect(300, 240, 80, 23));
        btnLogInCancel = new QPushButton(loginDialogue);
        btnLogInCancel->setObjectName("btnLogInCancel");
        btnLogInCancel->setGeometry(QRect(210, 240, 80, 23));
        lblLogInTitle = new QLabel(loginDialogue);
        lblLogInTitle->setObjectName("lblLogInTitle");
        lblLogInTitle->setGeometry(QRect(20, 10, 49, 15));
        lblUsername = new QLabel(loginDialogue);
        lblUsername->setObjectName("lblUsername");
        lblUsername->setGeometry(QRect(20, 80, 71, 16));
        lblPassword = new QLabel(loginDialogue);
        lblPassword->setObjectName("lblPassword");
        lblPassword->setGeometry(QRect(20, 130, 71, 16));
        lePassword = new QLineEdit(loginDialogue);
        lePassword->setObjectName("lePassword");
        lePassword->setGeometry(QRect(100, 130, 241, 22));
        leUsername = new QLineEdit(loginDialogue);
        leUsername->setObjectName("leUsername");
        leUsername->setGeometry(QRect(100, 80, 241, 22));

        retranslateUi(loginDialogue);

        QMetaObject::connectSlotsByName(loginDialogue);
    } // setupUi

    void retranslateUi(QDialog *loginDialogue)
    {
        loginDialogue->setWindowTitle(QCoreApplication::translate("loginDialogue", "Dialog", nullptr));
        btnLogInConfirm->setText(QCoreApplication::translate("loginDialogue", "Log In", nullptr));
        btnLogInCancel->setText(QCoreApplication::translate("loginDialogue", "\360\237\233\207 Cancel", nullptr));
        lblLogInTitle->setText(QCoreApplication::translate("loginDialogue", "Log In:", nullptr));
        lblUsername->setText(QCoreApplication::translate("loginDialogue", "Username:", nullptr));
        lblPassword->setText(QCoreApplication::translate("loginDialogue", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginDialogue: public Ui_loginDialogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOGUE_H
