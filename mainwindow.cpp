#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "additemsscreen.h"
#include "settingsscreen.h"
#include "logindialogue.h"
#include "itembookoutdialogue.h"
//lude "qtabelwidget.h"

int preparedTotalAmountOfItems = 3000;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //connect to the sql database
    QSqlDatabase DB_connection = QSqlDatabase::addDatabase("QSQLITE");
    DB_connection.setDatabaseName(QCoreApplication::applicationDirPath()+"/Inventory.db");          //file path of the database file
    if (DB_connection.open())
    {
        qDebug() << "Database Is Connected";
    }
    else
    {
        qDebug() << "Database Not Connected";
        qDebug() << "Error:" << DB_connection.lastError();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAddItems_clicked()               //Code to open the dialogue for the Inventory management screen when you click on the add items button
{
    //DB_connection.close();
    AddItemsScreen addItemsWindow;
    addItemsWindow.setModal(true);
    addItemsWindow.exec();
}


void MainWindow::on_btnSettings_clicked()               //Code to open the dialogue box for the settings when you click on the settings button
{
    SettingsScreen settingsWindow;
    settingsWindow.setModal(true);
    settingsWindow.exec();
}


void MainWindow::on_btnLogin_clicked()                  //Code to open the dialogue box for the login menu when you click on the log in button
{
    loginDialogue loginScreen;
    loginScreen.setModal(true);
    loginScreen.exec();
}





void MainWindow::on_twInventoryList_itemPressed(QTableWidgetItem *item)
{

    ui->twInventoryList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    itemBookoutDialogue bookoutConfirmation;
    bookoutConfirmation.setModal(true);
    bookoutConfirmation.exec();
}


void MainWindow::on_pushButton_clicked()
{
    DB_connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryLoadData(DB_connection);
    QueryLoadData.prepare("SELECT * FROM InventoryData");

    if (QueryLoadData.exec())
    {

        int rowNumber = 0;
        while (QueryLoadData.next())
        {
            ui->twInventoryList->setItem(rowNumber, 0, new QTableWidgetItem(QString(QueryLoadData.value("AINumber").toString())));          //loads in all the data from the database
            ui->twInventoryList->setItem(rowNumber, 1, new QTableWidgetItem(QString(QueryLoadData.value("IsleNumber").toString())));
            ui->twInventoryList->setItem(rowNumber, 2, new QTableWidgetItem(QString(QueryLoadData.value("BinNumber").toString())));
            ui->twInventoryList->setItem(rowNumber, 3, new QTableWidgetItem(QString(QueryLoadData.value("PartNumber").toString())));
            ui->twInventoryList->setItem(rowNumber, 4, new QTableWidgetItem(QString(QueryLoadData.value("PartDesc").toString())));
            ui->twInventoryList->setItem(rowNumber, 5, new QTableWidgetItem(QString(QueryLoadData.value("Manufacturer").toString())));
            ui->twInventoryList->setItem(rowNumber, 6, new QTableWidgetItem(QString(QueryLoadData.value("NumberInStock").toString())));
            ui->twInventoryList->setItem(rowNumber, 7, new QTableWidgetItem(QString(QueryLoadData.value("MinimumAllowedStock").toString())));
            rowNumber = rowNumber + 1;
        }
        QString SearchText = ui->leSearchBar->text();           //sets the searchbar text as a normal string for an easier time for me

        QList<QTableWidgetItem*> foundItems = ui->twInventoryList->findItems(SearchText, Qt::MatchContains);

        for (QTableWidgetItem *item : foundItems) {
            item->setBackground(Qt::blue);
        }
     /* QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);        //creates a proxy model to use instead of the normal model
        proxyModel->setSourceModel(ui->twInventoryList->model());                   //sets the tables model to the new proxy model
        QAbstractItemModel *originalModel = ui->twInventoryList->model();
        ui->twInventoryList->setModel(proxyModel);  */

    }
    //QSqlQuery QueryUpdateData(DB_connectionSearch);
    //QueryUpdateData.prepare("UPDATE TABLE InventoryData SET AINumber=:AINumber, IsleNumber=:IsleNumber, BinNumber=:BinNumber, PartNumber=:PartNumber, PartDesc=:PartDesc, Manufacturer=:Manufacturer, NumberInStock=:NumberInStock, MinimumAllowedInStock=:MinimumAllowedInStock");

    QSqlDatabase::database().commit();
    DB_connection.close();
}

