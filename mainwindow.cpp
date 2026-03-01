#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "additemsscreen.h"
#include "settingsscreen.h"
#include "logindialogue.h"
#include "itembookoutdialogue.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAddItems_clicked()               //Code to open the dialogue for the Inventory management screen when you click on the add items button
{
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

