#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qtablewidget.h"
#include <QMainWindow>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <qdebug.h>
#include <QLatin1StringMatcher>
#include <QLatin1StringView>

extern QTableWidget twInventoryList;
inline QString itemName;

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
    static QTableWidgetItem* selectedItem;

private slots:
    void on_btnLogin_clicked();

    void on_btnAddItems_clicked();

    void on_btnSettings_clicked();

    void on_twInventoryList_itemClicked(QTableWidgetItem *item);

    void on_twInventoryList_itemPressed(QTableWidgetItem *item);

    void on_pushButton_clicked();

    void on_twInventoryList_cellPressed(int row, int column);

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
