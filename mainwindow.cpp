#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_botaoSim_clicked()
{
   ui->label->setText("Be on your guard.");
}


void MainWindow::on_botaoNao_clicked()
{
   ui->label->setText("You shall not pass");
}
