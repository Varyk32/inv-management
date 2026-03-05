#include "itembookoutdialogue.h"
#include "ui_itembookoutdialogue.h"

itemBookoutDialogue::itemBookoutDialogue(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::itemBookoutDialogue)
{
    ui->setupUi(this);
}

itemBookoutDialogue::~itemBookoutDialogue()
{
    delete ui;
}


void itemBookoutDialogue::on_btnYes_clicked()
{
    Ui::clockLog clocklog;
    this->close();
}


void itemBookoutDialogue::on_btnNo_clicked()
{
    this->close();
}

