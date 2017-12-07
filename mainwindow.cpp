#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap image("C:/Users/david/Documents/Systemy_ekspertowe/mainImage.png");
    ui->label_mainImage->setPixmap(image);
    factory = std::make_shared<NardzedziaFactory>();
    narzedziaPtr_ = std::make_shared<std::vector<Narzedzie>>((*factory).narzedzia());
    gwintWindow = std::make_shared<GwintWindow>(*narzedziaPtr_);
    otworWindow = std::make_shared<OtworWindow>();
    plaszKrawWindow = std::make_shared<PlaszczyznaKrawedzWindow>();
    ui->stackedWidget->insertWidget(1, gwintWindow.get());
    ui->stackedWidget->insertWidget(2, otworWindow.get());
    ui->stackedWidget->insertWidget(3, plaszKrawWindow.get());

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_5_clicked()
{
    if (ui->radioButton_gwint->isChecked())
    {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if (ui->radioButton_otwor->isChecked())
    {
        ui->stackedWidget->setCurrentIndex(2);
    }
    else if (ui->radioButton_plaszKraw->isChecked())
    {
        ui->stackedWidget->setCurrentIndex(3);
    }
}
