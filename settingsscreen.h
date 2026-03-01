#ifndef SETTINGSSCREEN_H
#define SETTINGSSCREEN_H

#include <QDialog>

namespace Ui {
class SettingsScreen;
}

class SettingsScreen : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsScreen(QWidget *parent = nullptr);
    ~SettingsScreen();

private slots:
    void on_btnBackSettings_clicked();

private:
    Ui::SettingsScreen *ui;
};

#endif // SETTINGSSCREEN_H
