#include "additemsscreen.h"
#include "ui_additemsscreen.h"
//#include "mainwindow.cpp"

#include <QTableWidget>                                         //Ensures table widget can be modified from this screen
#include <mainwindow.h>

QString AINumber;                                               //declaring strings for all the different variables used to describe parts
QString partNumber;
QString itemDescription;
QString isleNumber;
QString manufacturer;
QString minStock;
QString currStock;
QString binNum;
QString shelf;

//QSqlDatabase DB_connection = QSqlDatabase::addDatabase("QSQLITE");                          //connect to the database so you can add items
//DB_connection.setDatabaseName(QCoreApplication::applicationDirPath()+"/Inventory.db");

int totalPartsCount = 2;                                             //declared in case its necessary to use a defined integer for the row count for whatever reason in the future

AddItemsScreen::AddItemsScreen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddItemsScreen)
{
    ui->setupUi(this);
}

AddItemsScreen::~AddItemsScreen()
{
    delete ui;
}

void AddItemsScreen::on_btnCancel_clicked()
{
    this->close();                                                  //closes the add item screen if action is cancelled
}


void AddItemsScreen::on_btnAddItem_clicked()
{
    //connect to the sql database
    QSqlDatabase DB_connectionModData = QSqlDatabase::addDatabase("QSQLITE", "modifyData");                //creates a connection to the database to modifydata through
    DB_connectionModData.setDatabaseName(QCoreApplication::applicationDirPath()+"/Inventory.db");          //file path of the database file

    if (DB_connectionModData.open())
    {
        qDebug() << "Database Is Connected";
    }
    else
    {
        qDebug() << "Database Not Connected";
        qDebug() << "Error:" << DB_connectionModData.lastError();
    }

    QSqlDatabase::database().transaction();
    QSqlQuery QueryInsertData(DB_connectionModData);               //Queries the database to let it know data will be coming in
    QueryInsertData.prepare("INSERT INTO InventoryData(AINumber, IsleNumber, Shelf, BinNumber, PartNumber, PartDesc, Manufacturer, NumberInStock, MinimumAllowedStock) VALUES(:AINumber, :IsleNumber, :BinNumber, :Shelf, :PartNumber, :PartDesc, :Manufacturer, :NumberInStock, :MinimumAllowedStock)");
    QueryInsertData.bindValue(":AINumber", ui->leAINumber->text());         //inserts the values of the textedit boxes into the database
    QueryInsertData.bindValue(":IsleNumber", ui->leIsle->text());
    QueryInsertData.bindValue(":Shelf", ui->leShelf->text());
    QueryInsertData.bindValue(":BinNumber", ui->leBin->text());
    QueryInsertData.bindValue(":PartNumber", ui->lePartNumber->text());
    QueryInsertData.bindValue(":PartDesc", ui->teItemDesc->text());
    QueryInsertData.bindValue(":Manufacturer", ui->leMan->text());
    QueryInsertData.bindValue(":NumberInStock", ui->leCurrStock->text());
    QueryInsertData.bindValue(":MinimumAllowedStock", ui->leMinStock->text());
    QueryInsertData.exec();
    QSqlDatabase::database().commit();
    DB_connectionModData.close();
    this ->close();
}


void AddItemsScreen::on_leAINumber_returnPressed()
{

}

