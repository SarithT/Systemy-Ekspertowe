#include "gwintwindow.h"
#include "ui_gwintwindow.h"
#include <iostream>

GwintWindow::GwintWindow(const std::vector<Narzedzie>& narzedzia, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GwintWindow),
    narzedzia_(narzedzia)
{
    ui->setupUi(this);
    QPixmap image("C:/Users/david/Documents/Systemy_ekspertowe/gwintImage.png");
    QPixmap przelotowyImage("C:/Users/david/Documents/Systemy_ekspertowe/gwintPrzelotowyImage.png");
    QPixmap nieprzelotowyImage("C:/Users/david/Documents/Systemy_ekspertowe/gwintNieprzelotowyImage.png");
    ui->label->setPixmap(image);
    ui->label_2->setPixmap(przelotowyImage);
    ui->label_7->setPixmap(nieprzelotowyImage);
    ui->comboBox_srednicaGwintu->addItems({"M8", "M10", "M12"});
    ui->comboBox_kierunekGwintu->addItems({"Prawy", "Lewy"});
    ui->comboBox_klasaGwintu->addItems({"4H", "6H"});
}

GwintWindow::~GwintWindow()
{
    delete ui;
}

void GwintWindow::on_pushButton_clicked()
{
    if (ui->radioButton->isChecked())
    {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if (ui->radioButton_2->isChecked())
    {
        ui->stackedWidget->setCurrentIndex(2);
    }
}

void GwintWindow::on_pushButton_2_clicked()
{
    ui->label_srednica->setText(QString(std::to_string(narzedzia_[0].srednicaSkrawania()).c_str()));
    ui->stackedWidget->setCurrentIndex(3);
}
