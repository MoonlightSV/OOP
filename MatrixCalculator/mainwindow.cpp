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

void MainWindow::on_setA_clicked()
{
    int row = ui->rowA->value();
    int column = ui->colA->value();
    if ((row!=0) && (column!=0)){
        Matrix tmp(row, column);
        ui->matrixA->setRowCount(row);
        ui->matrixA->setColumnCount(column);
        MatrixToTable(tmp, ui->matrixA);
        ui->matrixA->resizeRowsToContents();
        ui->matrixA->resizeColumnsToContents();
    }
}

void MainWindow::on_setB_clicked()
{
    int row = ui->rowB->value();
    int column = ui->colB->value();
    if ((row!=0) && (column!=0)){
        Matrix tmp(row, column);
        ui->matrixB->setRowCount(row);
        ui->matrixB->setColumnCount(column);
        MatrixToTable(tmp, ui->matrixB);
        ui->matrixB->resizeRowsToContents();
        ui->matrixB->resizeColumnsToContents();
    }
}

void MainWindow::on_detA_clicked()
{
    int row = ui->matrixA->rowCount();
    int column = ui->matrixA->columnCount();
    if ((row != 0) && (column != 0)){
        if (row == column){//проверка размера матрицы
            Matrix tmp = TableToMatrix(ui->matrixA);
            double det = tmp.det();//вычисляем определитель
            QString str = QString::number(det, 'f', 3);//перевод в строку вещ.числа
            ui->LdetA->setText(str);//вывод строки в метку
        }
    }
}

void MainWindow::on_detB_clicked()
{
    int row = ui->matrixB->rowCount();
    int column = ui->matrixB->columnCount();
    if ((row != 0) && (column != 0)){
        if (row == column){//проверка размера матрицы
            Matrix tmp = TableToMatrix(ui->matrixB);
            double det = tmp.det();//вычисляем определитель
            QString str = QString::number(det, 'f', 3);//перевод в строку вещ.числа
            ui->LdetB->setText(str);//вывод строки в метку
        }
    }
}

