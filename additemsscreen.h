#ifndef ADDITEMSSCREEN_H
#define ADDITEMSSCREEN_H

#include <QDialog>

namespace Ui {
class AddItemsScreen;
}

class AddItemsScreen : public QDialog
{
    Q_OBJECT

public:
    explicit AddItemsScreen(QWidget *parent = nullptr);
    ~AddItemsScreen();

private slots:
    void on_btnCancel_clicked();

    void on_btnAddItem_clicked();

    void on_leAINumber_returnPressed();

private:
    Ui::AddItemsScreen *ui;
};

#endif // ADDITEMSSCREEN_H
