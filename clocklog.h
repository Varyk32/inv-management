#ifndef CLOCKLOG_H
#define CLOCKLOG_H

#include <QDialog>

namespace Ui {
class clockLog;
}

class clockLog : public QDialog
{
    Q_OBJECT

public:
    explicit clockLog(QWidget *parent = nullptr);
    ~clockLog();

private slots:

    void on_btnCancel_clicked();

    void on_btnBookOut_clicked();

private:
    Ui::clockLog *ui;
};

#endif // CLOCKLOG_H
