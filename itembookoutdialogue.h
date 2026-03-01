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

private:
    Ui::itemBookoutDialogue *ui;
};

#endif // ITEMBOOKOUTDIALOGUE_H
