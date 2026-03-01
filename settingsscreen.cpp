#include "settingsscreen.h"
#include "ui_settingsscreen.h"

SettingsScreen::SettingsScreen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SettingsScreen)
{
    ui->setupUi(this);
}

SettingsScreen::~SettingsScreen()
{
    delete ui;
}

void SettingsScreen::on_btnBackSettings_clicked()
{
    this->close();                                      //Closes Dialog when back is pressed
}

