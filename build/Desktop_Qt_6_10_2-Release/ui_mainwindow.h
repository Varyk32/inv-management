/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *lblStoreManager;
    QLabel *lblCurrentUser;
    QLineEdit *txtCurrentUser;
    QPushButton *btnLogin;
    QFrame *frameInventoryList;
    QTableWidget *twInventoryList;
    QLineEdit *leSearchBar;
    QPushButton *pushButton;
    QPushButton *btnSettings;
    QPushButton *btnLogout;
    QPushButton *btnAddItems;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(860, 522);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lblStoreManager = new QLabel(centralwidget);
        lblStoreManager->setObjectName("lblStoreManager");
        lblStoreManager->setGeometry(QRect(30, 0, 191, 31));
        QFont font;
        font.setPointSize(20);
        lblStoreManager->setFont(font);
        lblCurrentUser = new QLabel(centralwidget);
        lblCurrentUser->setObjectName("lblCurrentUser");
        lblCurrentUser->setGeometry(QRect(30, 30, 151, 31));
        QFont font1;
        font1.setPointSize(12);
        lblCurrentUser->setFont(font1);
        txtCurrentUser = new QLineEdit(centralwidget);
        txtCurrentUser->setObjectName("txtCurrentUser");
        txtCurrentUser->setGeometry(QRect(120, 40, 191, 22));
        txtCurrentUser->setDragEnabled(false);
        txtCurrentUser->setReadOnly(true);
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(680, 0, 131, 61));
        frameInventoryList = new QFrame(centralwidget);
        frameInventoryList->setObjectName("frameInventoryList");
        frameInventoryList->setGeometry(QRect(30, 150, 811, 321));
        frameInventoryList->setFrameShape(QFrame::Shape::StyledPanel);
        frameInventoryList->setFrameShadow(QFrame::Shadow::Raised);
        twInventoryList = new QTableWidget(frameInventoryList);
        if (twInventoryList->columnCount() < 8)
            twInventoryList->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twInventoryList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twInventoryList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twInventoryList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twInventoryList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        twInventoryList->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        twInventoryList->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        twInventoryList->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        twInventoryList->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (twInventoryList->rowCount() < 1)
            twInventoryList->setRowCount(1);
        QFont font2;
        font2.setBold(true);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font2);
        __qtablewidgetitem8->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        twInventoryList->setItem(0, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        twInventoryList->setItem(0, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        twInventoryList->setItem(0, 2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        twInventoryList->setItem(0, 3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font2);
        __qtablewidgetitem12->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        twInventoryList->setItem(0, 4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font2);
        __qtablewidgetitem13->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        twInventoryList->setItem(0, 5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFont(font2);
        __qtablewidgetitem14->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        twInventoryList->setItem(0, 6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFont(font2);
        __qtablewidgetitem15->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        twInventoryList->setItem(0, 7, __qtablewidgetitem15);
        twInventoryList->setObjectName("twInventoryList");
        twInventoryList->setGeometry(QRect(0, 10, 801, 311));
        leSearchBar = new QLineEdit(centralwidget);
        leSearchBar->setObjectName("leSearchBar");
        leSearchBar->setGeometry(QRect(30, 60, 581, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 110, 581, 31));
        btnSettings = new QPushButton(centralwidget);
        btnSettings->setObjectName("btnSettings");
        btnSettings->setGeometry(QRect(430, 0, 91, 51));
        btnLogout = new QPushButton(centralwidget);
        btnLogout->setObjectName("btnLogout");
        btnLogout->setGeometry(QRect(680, 70, 131, 61));
        btnAddItems = new QPushButton(centralwidget);
        btnAddItems->setObjectName("btnAddItems");
        btnAddItems->setGeometry(QRect(530, 0, 91, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 860, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lblStoreManager->setText(QCoreApplication::translate("MainWindow", "Store Manager", nullptr));
        lblCurrentUser->setText(QCoreApplication::translate("MainWindow", "Current User:", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twInventoryList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "AI number", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = twInventoryList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Manufacturer", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = twInventoryList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Isle", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = twInventoryList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Bin", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = twInventoryList->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Part Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = twInventoryList->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Part Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = twInventoryList->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "NIS", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = twInventoryList->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "MPS", nullptr));

        const bool __sortingEnabled = twInventoryList->isSortingEnabled();
        twInventoryList->setSortingEnabled(false);
        twInventoryList->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        btnSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        btnLogout->setText(QCoreApplication::translate("MainWindow", "Log Out", nullptr));
        btnAddItems->setText(QCoreApplication::translate("MainWindow", "Add Items", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
