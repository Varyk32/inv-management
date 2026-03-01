/********************************************************************************
** Form generated from reading UI file 'settingsscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSSCREEN_H
#define UI_SETTINGSSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SettingsScreen
{
public:
    QPushButton *btnBackSettings;
    QPushButton *btnApplySettings;

    void setupUi(QDialog *SettingsScreen)
    {
        if (SettingsScreen->objectName().isEmpty())
            SettingsScreen->setObjectName("SettingsScreen");
        SettingsScreen->resize(400, 300);
        btnBackSettings = new QPushButton(SettingsScreen);
        btnBackSettings->setObjectName("btnBackSettings");
        btnBackSettings->setGeometry(QRect(10, 260, 80, 23));
        btnApplySettings = new QPushButton(SettingsScreen);
        btnApplySettings->setObjectName("btnApplySettings");
        btnApplySettings->setGeometry(QRect(300, 260, 80, 23));

        retranslateUi(SettingsScreen);

        QMetaObject::connectSlotsByName(SettingsScreen);
    } // setupUi

    void retranslateUi(QDialog *SettingsScreen)
    {
        SettingsScreen->setWindowTitle(QCoreApplication::translate("SettingsScreen", "Dialog", nullptr));
        btnBackSettings->setText(QCoreApplication::translate("SettingsScreen", "Back", nullptr));
        btnApplySettings->setText(QCoreApplication::translate("SettingsScreen", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsScreen: public Ui_SettingsScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSSCREEN_H
