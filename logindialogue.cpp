#include "logindialogue.h"
#include "ui_logindialogue.h"


loginDialogue::loginDialogue(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::loginDialogue)
{
    ui->setupUi(this);
}

loginDialogue::~loginDialogue()
{
    delete ui;
}

void loginDialogue::on_btnLogInCancel_clicked()
{
    this->close();                                          //Closes Dialog when cancel is pressed
}

