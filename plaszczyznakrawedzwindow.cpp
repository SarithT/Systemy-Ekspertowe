#include "plaszczyznakrawedzwindow.h"
#include "ui_plaszczyznakrawedzwindow.h"

PlaszczyznaKrawedzWindow::PlaszczyznaKrawedzWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlaszczyznaKrawedzWindow)
{
    ui->setupUi(this);
    QPixmap mainImage("C:/Users/david/Documents/Systemy_ekspertowe/plaszczyznaKrawedzImage.png");
    QPixmap plaszczyznaImage("C:/Users/david/Documents/Systemy_ekspertowe/plaszczyznaImage.png");
    QPixmap krawedzImage("C:/Users/david/Documents/Systemy_ekspertowe/krawedzImage.png");
    ui->label->setPixmap(mainImage);
    ui->label_5->setPixmap(plaszczyznaImage);
    ui->label_10->setPixmap(krawedzImage);
}

PlaszczyznaKrawedzWindow::~PlaszczyznaKrawedzWindow()
{
    delete ui;
}

void PlaszczyznaKrawedzWindow::on_pushButton_clicked()
{
    if (ui->radioButton_2->isChecked())
    {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if (ui->radioButton->isChecked())
    {
        ui->stackedWidget->setCurrentIndex(2);
    }
}
