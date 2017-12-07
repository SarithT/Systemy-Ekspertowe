#include "otworwindow.h"
#include "ui_otworwindow.h"

OtworWindow::OtworWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OtworWindow)
{
    ui->setupUi(this);
    przelotowyImage = std::make_shared<QPixmap>("C:/Users/david/Documents/Systemy_ekspertowe/otworPrzelotowyImage.png");
    nieprzelotowyImage = std::make_shared<QPixmap>("C:/Users/david/Documents/Systemy_ekspertowe/otworNieprzelotowyImage.png");
    ui->comboBox_rodzajOtworu->addItems({"Przelotowy", "Nieprzelotowy"});
}

OtworWindow::~OtworWindow()
{
    delete ui;
}

void OtworWindow::setImage(int index)
{
    if (index == 0)
    {
        ui->label->setPixmap(*przelotowyImage);
    }
    else if (index == 1)
    {
        ui->label->setPixmap(*nieprzelotowyImage);
    }
}

void OtworWindow::on_comboBox_rodzajOtworu_currentIndexChanged(int index)
{
    setImage(index);
}
