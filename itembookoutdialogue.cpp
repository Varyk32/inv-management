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
