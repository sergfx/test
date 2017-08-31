#include <QDebug>
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->author->setText(tr("Киркоров"));
    ui->elapsed->setText(tr("100 мин"));
    ui->bitrate->setText(tr("10 Kbps"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_play_clicked()
{
    qDebug() << Q_FUNC_INFO;
    QMessageBox::information(0,tr("Сообщение"),tr("Проигрывание музыки"));
}

void MainWindow::on_history_clicked()
{
    qDebug() << Q_FUNC_INFO;
    QMessageBox::information(0,tr("Сообщение"),tr("История"));
}

void MainWindow::on_exit_clicked()
{
    qDebug() << Q_FUNC_INFO ;
    close();
}

void MainWindow::on_stop_clicked()
{
    qDebug() << Q_FUNC_INFO;
    QMessageBox::information(0,tr("Сообщение"),tr("Стоп"));
}
