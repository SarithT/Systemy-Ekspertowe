#ifndef GWINTWINDOW_H
#define GWINTWINDOW_H

#include <QWidget>
#include <helpers/narzedzie.h>

namespace Ui {
class GwintWindow;
}

class GwintWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GwintWindow(const std::vector<Narzedzie>& narzedzia, QWidget *parent = 0);
    ~GwintWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::GwintWindow *ui;
    std::vector<Narzedzie> narzedzia_;
};

#endif // GWINTWINDOW_H
