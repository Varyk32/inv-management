#ifndef ITEMBOOKOUTDIALOGUE_H
#define ITEMBOOKOUTDIALOGUE_H

#include <QDialog>

namespace Ui {
class itemBookoutDialogue;
}

class itemBookoutDialogue : public QDialog
{
    Q_OBJECT

public:
    explicit itemBookoutDialogue(QWidget *parent = nullptr);
    ~itemBookoutDialogue();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_pressed();

    void on_btnYes_clicked();

    void on_btnNo_clicked();

private:
    Ui::itemBookoutDialogue *ui;
};

#endif // ITEMBOOKOUTDIALOGUE_H
