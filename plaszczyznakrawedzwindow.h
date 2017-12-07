#ifndef PLASZCZYZNAKRAWEDZWINDOW_H
#define PLASZCZYZNAKRAWEDZWINDOW_H

#include <QWidget>

namespace Ui {
class PlaszczyznaKrawedzWindow;
}

class PlaszczyznaKrawedzWindow : public QWidget
{
    Q_OBJECT

public:
    explicit PlaszczyznaKrawedzWindow(QWidget *parent = 0);
    ~PlaszczyznaKrawedzWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PlaszczyznaKrawedzWindow *ui;
};

#endif // PLASZCZYZNAKRAWEDZWINDOW_H
