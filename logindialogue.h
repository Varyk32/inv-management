#ifndef LOGINDIALOGUE_H
#define LOGINDIALOGUE_H

#include <QDialog>
#include <QLineEdit>

namespace Ui {
class loginDialogue;
}

class Login : public QDialog
{

};


class loginDialogue : public QDialog
{
    Q_OBJECT

public:
    explicit loginDialogue(QWidget *parent = nullptr);
    ~loginDialogue();

private slots:
    void on_btnLogInCancel_clicked();

private:
    Ui::loginDialogue *ui;
};

#endif // LOGINDIALOGUE_H
