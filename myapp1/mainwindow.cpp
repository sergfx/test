#include <QDebug>
#include <QMessageBox>
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


void MainWindow::on_play_clicked()
{
    qDebug() << Q_FUNC_INFO;
    QMessageBox::information(0,tr("Сообщение"),tr("Проигрывание"));
}

void MainWindow::on_history_clicked()
{

}

void MainWindow::on_exit_clicked()
{
    close();
}
