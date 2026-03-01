#include "additemsscreen.h"
#include "ui_additemsscreen.h"
#include "ui_mainwindow.h"


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
    AINumber= ui->leAINumber->displayText();                        //setting all the strings declared earlier to be the values of the text entered in the line edits
    //qDebug()<<"Text:"<<AINumber;                                  //debug to check if the string value got assigned correctly
    partNumber = ui->lePartNumber->displayText();
    itemDescription = ui->teItemDesc->displayText();
    isleNumber = ui->leIsle->displayText();
    manufacturer = ui->leMan->displayText();
    minStock = ui->leMinStock->displayText();
    currStock = ui->leCurrStock->displayText();
    binNum = ui->leBin->displayText();

    QTableWidget* stockTable = Ui::MainWindow().twInventoryList;     //Fetches the inventory list widget from the main window so its values can be modified
    // stockTable->insertRow(stockTable->rowCount());                   //adds a new row for the items details to be added to
    //totalPartsCount++;
    stockTable->setRowCount(totalPartsCount);
    stockTable->setItem(stockTable->rowCount(), 1, new QTableWidgetItem("AINumber"));
    stockTable->setItem(stockTable->rowCount(), 2, new QTableWidgetItem("partNumber"));
    stockTable->setItem(stockTable->rowCount(), 3, new QTableWidgetItem("itemDescription"));
    stockTable->setItem(stockTable->rowCount(), 4, new QTableWidgetItem("isleNumber"));
    stockTable->setItem(stockTable->rowCount(), 5, new QTableWidgetItem("manufacturer"));
    stockTable->setItem(stockTable->rowCount(), 6, new QTableWidgetItem("minStock"));
    stockTable->setItem(stockTable->rowCount(), 7, new QTableWidgetItem("currStock"));
    stockTable->setItem(stockTable->rowCount(), 8, new QTableWidgetItem("binNum"));

    this ->close();
}


void AddItemsScreen::on_leAINumber_returnPressed()
{

}

