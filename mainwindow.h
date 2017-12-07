 #ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "otworwindow.h"
#include "plaszczyznakrawedzwindow.h"
#include "helpers/nardzedziafactory.h"

#include <QMainWindow>
#include <memory>
#include <gwintwindow.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    std::shared_ptr<std::vector<Narzedzie>> narzedziaPtr_;
    std::shared_ptr<GwintWindow> gwintWindow;
    std::shared_ptr<OtworWindow> otworWindow;
    std::shared_ptr<PlaszczyznaKrawedzWindow> plaszKrawWindow;
    std::shared_ptr<NardzedziaFactory> factory;

};

#endif // MAINWINDOW_H
