/********************************************************************************
** Form generated from reading UI file 'addstockwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTOCKWINDOW_H
#define UI_ADDSTOCKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStockWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnBackAddStock;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddStockWindow)
    {
        if (AddStockWindow->objectName().isEmpty())
            AddStockWindow->setObjectName("AddStockWindow");
        AddStockWindow->resize(800, 600);
        centralwidget = new QWidget(AddStockWindow);
        centralwidget->setObjectName("centralwidget");
        btnBackAddStock = new QPushButton(centralwidget);
        btnBackAddStock->setObjectName("btnBackAddStock");
        btnBackAddStock->setGeometry(QRect(10, 470, 121, 71));
        AddStockWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddStockWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        AddStockWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AddStockWindow);
        statusbar->setObjectName("statusbar");
        AddStockWindow->setStatusBar(statusbar);

        retranslateUi(AddStockWindow);

        QMetaObject::connectSlotsByName(AddStockWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddStockWindow)
    {
        AddStockWindow->setWindowTitle(QCoreApplication::translate("AddStockWindow", "MainWindow", nullptr));
        btnBackAddStock->setText(QCoreApplication::translate("AddStockWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStockWindow: public Ui_AddStockWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTOCKWINDOW_H
