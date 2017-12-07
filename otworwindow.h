#ifndef OTWORWINDOW_H
#define OTWORWINDOW_H

#include <QWidget>
#include <memory>

namespace Ui {
class OtworWindow;
}

class OtworWindow : public QWidget
{
    Q_OBJECT

public:
    explicit OtworWindow(QWidget *parent = 0);
    ~OtworWindow();

private slots:
    void setImage(int index);

    void on_comboBox_rodzajOtworu_currentIndexChanged(int index);

private:
    Ui::OtworWindow *ui;
    std::shared_ptr<QPixmap> przelotowyImage;
    std::shared_ptr<QPixmap> nieprzelotowyImage;
};

#endif // OTWORWINDOW_H
