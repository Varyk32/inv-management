/********************************************************************************
** Form generated from reading UI file 'additemsscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMSSCREEN_H
#define UI_ADDITEMSSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddItemsScreen
{
public:
    QLabel *lblAddItemTitle;
    QLabel *lblcompanyNumber;
    QLabel *lblCurrStock;
    QLabel *lblMinStock;
    QLabel *lblPartNumber;
    QLabel *label;
    QLineEdit *leAINumber;
    QLineEdit *lePartNumber;
    QLineEdit *leMinStock;
    QLineEdit *leCurrStock;
    QPushButton *btnAddItem;
    QPushButton *btnCancel;
    QLineEdit *teItemDesc;
    QLabel *label_2;
    QLabel *lblBin;
    QLabel *lblMan;
    QLineEdit *leIsle;
    QLineEdit *leMan;
    QLineEdit *leBin;
    QLabel *lblShelf;
    QLineEdit *leShelf;

    void setupUi(QDialog *AddItemsScreen)
    {
        if (AddItemsScreen->objectName().isEmpty())
            AddItemsScreen->setObjectName("AddItemsScreen");
        AddItemsScreen->resize(869, 530);
        lblAddItemTitle = new QLabel(AddItemsScreen);
        lblAddItemTitle->setObjectName("lblAddItemTitle");
        lblAddItemTitle->setGeometry(QRect(420, 10, 61, 16));
        lblcompanyNumber = new QLabel(AddItemsScreen);
        lblcompanyNumber->setObjectName("lblcompanyNumber");
        lblcompanyNumber->setGeometry(QRect(10, 40, 61, 16));
        lblCurrStock = new QLabel(AddItemsScreen);
        lblCurrStock->setObjectName("lblCurrStock");
        lblCurrStock->setGeometry(QRect(10, 130, 91, 16));
        lblMinStock = new QLabel(AddItemsScreen);
        lblMinStock->setObjectName("lblMinStock");
        lblMinStock->setGeometry(QRect(10, 100, 61, 16));
        lblPartNumber = new QLabel(AddItemsScreen);
        lblPartNumber->setObjectName("lblPartNumber");
        lblPartNumber->setGeometry(QRect(10, 70, 81, 16));
        label = new QLabel(AddItemsScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 160, 151, 16));
        leAINumber = new QLineEdit(AddItemsScreen);
        leAINumber->setObjectName("leAINumber");
        leAINumber->setGeometry(QRect(130, 40, 721, 21));
        lePartNumber = new QLineEdit(AddItemsScreen);
        lePartNumber->setObjectName("lePartNumber");
        lePartNumber->setGeometry(QRect(130, 70, 721, 21));
        leMinStock = new QLineEdit(AddItemsScreen);
        leMinStock->setObjectName("leMinStock");
        leMinStock->setGeometry(QRect(130, 100, 721, 21));
        leCurrStock = new QLineEdit(AddItemsScreen);
        leCurrStock->setObjectName("leCurrStock");
        leCurrStock->setGeometry(QRect(130, 130, 721, 21));
        btnAddItem = new QPushButton(AddItemsScreen);
        btnAddItem->setObjectName("btnAddItem");
        btnAddItem->setGeometry(QRect(680, 420, 171, 91));
        btnCancel = new QPushButton(AddItemsScreen);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setGeometry(QRect(490, 420, 171, 91));
        teItemDesc = new QLineEdit(AddItemsScreen);
        teItemDesc->setObjectName("teItemDesc");
        teItemDesc->setGeometry(QRect(130, 160, 721, 22));
        label_2 = new QLabel(AddItemsScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 190, 151, 16));
        lblBin = new QLabel(AddItemsScreen);
        lblBin->setObjectName("lblBin");
        lblBin->setGeometry(QRect(10, 220, 151, 16));
        lblMan = new QLabel(AddItemsScreen);
        lblMan->setObjectName("lblMan");
        lblMan->setGeometry(QRect(10, 280, 151, 16));
        leIsle = new QLineEdit(AddItemsScreen);
        leIsle->setObjectName("leIsle");
        leIsle->setGeometry(QRect(130, 190, 721, 22));
        leMan = new QLineEdit(AddItemsScreen);
        leMan->setObjectName("leMan");
        leMan->setGeometry(QRect(130, 280, 721, 22));
        leBin = new QLineEdit(AddItemsScreen);
        leBin->setObjectName("leBin");
        leBin->setGeometry(QRect(130, 220, 721, 22));
        lblShelf = new QLabel(AddItemsScreen);
        lblShelf->setObjectName("lblShelf");
        lblShelf->setGeometry(QRect(10, 250, 151, 16));
        leShelf = new QLineEdit(AddItemsScreen);
        leShelf->setObjectName("leShelf");
        leShelf->setGeometry(QRect(130, 250, 721, 22));

        retranslateUi(AddItemsScreen);

        QMetaObject::connectSlotsByName(AddItemsScreen);
    } // setupUi

    void retranslateUi(QDialog *AddItemsScreen)
    {
        AddItemsScreen->setWindowTitle(QCoreApplication::translate("AddItemsScreen", "Dialog", nullptr));
        lblAddItemTitle->setText(QCoreApplication::translate("AddItemsScreen", "Add Item:", nullptr));
        lblcompanyNumber->setText(QCoreApplication::translate("AddItemsScreen", "AI Number:", nullptr));
        lblCurrStock->setText(QCoreApplication::translate("AddItemsScreen", "Current Stock:", nullptr));
        lblMinStock->setText(QCoreApplication::translate("AddItemsScreen", "Min. Stock:", nullptr));
        lblPartNumber->setText(QCoreApplication::translate("AddItemsScreen", "Part number:", nullptr));
        label->setText(QCoreApplication::translate("AddItemsScreen", "Item Description:", nullptr));
        btnAddItem->setText(QCoreApplication::translate("AddItemsScreen", "Add Item", nullptr));
        btnCancel->setText(QCoreApplication::translate("AddItemsScreen", "Cancel", nullptr));
        label_2->setText(QCoreApplication::translate("AddItemsScreen", "Isle number:", nullptr));
        lblBin->setText(QCoreApplication::translate("AddItemsScreen", "Bin Number:", nullptr));
        lblMan->setText(QCoreApplication::translate("AddItemsScreen", "Manufacturer:", nullptr));
        lblShelf->setText(QCoreApplication::translate("AddItemsScreen", "Shelf:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItemsScreen: public Ui_AddItemsScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMSSCREEN_H
