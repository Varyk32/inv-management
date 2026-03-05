#include "clocklog.h"
#include "ui_clocklog.h"
#include <qdatetime.h>
#include <qdir.h>
#include <QFile>
#include <QTextStream>

clockLog::clockLog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::clockLog)
{
    ui->setupUi(this);
}

clockLog::~clockLog()
{
    delete ui;
}

void clockLog::on_btnCancel_clicked()
{
    this->close();
}


void clockLog::on_btnBookOut_clicked()
{
    QString artisanName = ui->leArtisanName->displayText();                         //gets the artisans name and clock number ready for writing to the file
    QString clockNumber = ui->leClockNumber->displayText();

    QString filename="./logs/"+QDateTime().currentDateTime().toString("'data_'dd_MM_yyyy_ss_mm_HH''");      //makes a txt file named after the current date and time
    if(QDir("logs").exists())
    {
        QFile File(filename+".txt");
        if (File.open(QIODevice::ReadWrite))
        {
        QTextStream out(&File);                     //writes the artisans name and clock number to the file
        out << artisanName;
        out << '\n';
        out << clockNumber;
        //qDebug() << "file made";
        out.flush();
        File.close();
        }
        else
        {
            qDebug() << File.errorString();
        }
    }
    else
    {
        QDir().mkdir("logs");
    }


    this->close();
}

