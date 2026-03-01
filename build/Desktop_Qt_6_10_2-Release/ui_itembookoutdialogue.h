/********************************************************************************
** Form generated from reading UI file 'itembookoutdialogue.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMBOOKOUTDIALOGUE_H
#define UI_ITEMBOOKOUTDIALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_itemBookoutDialogue
{
public:
    QLabel *lblbookoutconfirm;
    QLabel *lblSelectedItem;
    QLineEdit *leSelectedItem;
    QLabel *lblSelectedItem_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *itemBookoutDialogue)
    {
        if (itemBookoutDialogue->objectName().isEmpty())
            itemBookoutDialogue->setObjectName("itemBookoutDialogue");
        itemBookoutDialogue->resize(400, 300);
        lblbookoutconfirm = new QLabel(itemBookoutDialogue);
        lblbookoutconfirm->setObjectName("lblbookoutconfirm");
        lblbookoutconfirm->setGeometry(QRect(20, 10, 131, 16));
        lblSelectedItem = new QLabel(itemBookoutDialogue);
        lblSelectedItem->setObjectName("lblSelectedItem");
        lblSelectedItem->setGeometry(QRect(20, 60, 221, 16));
        leSelectedItem = new QLineEdit(itemBookoutDialogue);
        leSelectedItem->setObjectName("leSelectedItem");
        leSelectedItem->setGeometry(QRect(20, 90, 351, 22));
        leSelectedItem->setReadOnly(true);
        lblSelectedItem_2 = new QLabel(itemBookoutDialogue);
        lblSelectedItem_2->setObjectName("lblSelectedItem_2");
        lblSelectedItem_2->setGeometry(QRect(20, 140, 221, 16));
        pushButton = new QPushButton(itemBookoutDialogue);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(270, 230, 101, 61));
        pushButton_2 = new QPushButton(itemBookoutDialogue);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(149, 230, 101, 61));

        retranslateUi(itemBookoutDialogue);

        QMetaObject::connectSlotsByName(itemBookoutDialogue);
    } // setupUi

    void retranslateUi(QDialog *itemBookoutDialogue)
    {
        itemBookoutDialogue->setWindowTitle(QCoreApplication::translate("itemBookoutDialogue", "Dialog", nullptr));
        lblbookoutconfirm->setText(QCoreApplication::translate("itemBookoutDialogue", "Book Out Confirmation", nullptr));
        lblSelectedItem->setText(QCoreApplication::translate("itemBookoutDialogue", "Current item selected for booking out:", nullptr));
        lblSelectedItem_2->setText(QCoreApplication::translate("itemBookoutDialogue", "Are you sure you want to book out this item?", nullptr));
        pushButton->setText(QCoreApplication::translate("itemBookoutDialogue", "Yes", nullptr));
        pushButton_2->setText(QCoreApplication::translate("itemBookoutDialogue", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class itemBookoutDialogue: public Ui_itemBookoutDialogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMBOOKOUTDIALOGUE_H
