/********************************************************************************
** Form generated from reading UI file 'clocklog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCKLOG_H
#define UI_CLOCKLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_clockLog
{
public:
    QPushButton *btnBookOut;
    QLabel *lblBookoutItem;
    QPushButton *btnCancel;
    QTextBrowser *tbItemName;
    QLineEdit *leArtisanName;
    QLabel *lblArtisanName;
    QLabel *lblArtisanName_2;
    QLineEdit *leClockNumber;

    void setupUi(QDialog *clockLog)
    {
        if (clockLog->objectName().isEmpty())
            clockLog->setObjectName("clockLog");
        clockLog->resize(400, 300);
        btnBookOut = new QPushButton(clockLog);
        btnBookOut->setObjectName("btnBookOut");
        btnBookOut->setGeometry(QRect(19, 220, 361, 61));
        lblBookoutItem = new QLabel(clockLog);
        lblBookoutItem->setObjectName("lblBookoutItem");
        lblBookoutItem->setGeometry(QRect(20, 10, 81, 16));
        btnCancel = new QPushButton(clockLog);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setGeometry(QRect(20, 180, 361, 31));
        tbItemName = new QTextBrowser(clockLog);
        tbItemName->setObjectName("tbItemName");
        tbItemName->setGeometry(QRect(110, 10, 256, 16));
        leArtisanName = new QLineEdit(clockLog);
        leArtisanName->setObjectName("leArtisanName");
        leArtisanName->setGeometry(QRect(120, 60, 241, 22));
        lblArtisanName = new QLabel(clockLog);
        lblArtisanName->setObjectName("lblArtisanName");
        lblArtisanName->setGeometry(QRect(20, 60, 81, 16));
        lblArtisanName_2 = new QLabel(clockLog);
        lblArtisanName_2->setObjectName("lblArtisanName_2");
        lblArtisanName_2->setGeometry(QRect(20, 100, 81, 16));
        leClockNumber = new QLineEdit(clockLog);
        leClockNumber->setObjectName("leClockNumber");
        leClockNumber->setGeometry(QRect(120, 100, 241, 22));

        retranslateUi(clockLog);

        QMetaObject::connectSlotsByName(clockLog);
    } // setupUi

    void retranslateUi(QDialog *clockLog)
    {
        clockLog->setWindowTitle(QCoreApplication::translate("clockLog", "Dialog", nullptr));
        btnBookOut->setText(QCoreApplication::translate("clockLog", "Book Out", nullptr));
        lblBookoutItem->setText(QCoreApplication::translate("clockLog", "Book Out Item:", nullptr));
        btnCancel->setText(QCoreApplication::translate("clockLog", "Cancel", nullptr));
        lblArtisanName->setText(QCoreApplication::translate("clockLog", "Artisan Name:", nullptr));
        lblArtisanName_2->setText(QCoreApplication::translate("clockLog", "Clock Number:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clockLog: public Ui_clockLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCKLOG_H
