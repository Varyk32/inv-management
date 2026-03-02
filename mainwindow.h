#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qtablewidget.h"
#include <QMainWindow>
#include <QtSql>
//#include <QtSql/QSqlDatabase>
//#include <QtSql/QSqlError>
//#include <qdebug.h>

extern QTableWidget twInventoryList;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSqlDatabase DB_connection;

private slots:
    void on_btnLogin_clicked();

    void on_btnAddItems_clicked();

    void on_btnSettings_clicked();

    void on_twInventoryList_itemClicked(QTableWidgetItem *item);

    void on_twInventoryList_itemPressed(QTableWidgetItem *item);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
