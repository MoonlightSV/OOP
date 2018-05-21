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


void MainWindow::on_mulAtonum_clicked()
{
    int row = ui->matrixA->rowCount();
    int column = ui->matrixA->columnCount();
    if ((row != 0) && (column != 0)){
        Matrix tmp = TableToMatrix(ui->matrixA);
        QString s = ui->numA->text();
        bool ok;
        float num = s.toFloat(&ok);
        tmp = tmp.mulnum(num);//умножение матрицы на число
        ui->matrixRes->setRowCount(row);
        ui->matrixRes->setColumnCount(column);
        MatrixToTable(tmp, ui->matrixRes);
        ui->matrixRes->resizeRowsToContents();
        ui->matrixRes->resizeColumnsToContents();
    }
}

void MainWindow::on_mulBtonum_clicked()
{
    int row = ui->matrixB->rowCount();
    int column = ui->matrixB->columnCount();
    if ((row != 0) && (column != 0)){
        Matrix tmp = TableToMatrix(ui->matrixB);
        QString s = ui->numB->text();
        bool ok;
        float num = s.toFloat(&ok);
        tmp = tmp.mulnum(num);//умножение матрицы на число
        ui->matrixRes->setRowCount(row);
        ui->matrixRes->setColumnCount(column);
        MatrixToTable(tmp, ui->matrixRes);
        ui->matrixRes->resizeRowsToContents();
        ui->matrixRes->resizeColumnsToContents();
    }
}

void MainWindow::on_transA_clicked()
{
    int row = ui->matrixA->rowCount();
    int column = ui->matrixA->columnCount();
    if ((row != 0) && (column != 0)){
        Matrix tmp = TableToMatrix(ui->matrixA);
        tmp = tmp.trans();
        ui->matrixRes->setRowCount(column);
        ui->matrixRes->setColumnCount(row);
        MatrixToTable(tmp, ui->matrixRes);
        ui->matrixRes->resizeRowsToContents();
        ui->matrixRes->resizeColumnsToContents();
    }
}

void MainWindow::on_transB_clicked()
{
    int row = ui->matrixB->rowCount();
    int column = ui->matrixB->columnCount();
    if ((row != 0) && (column != 0)){
        Matrix tmp = TableToMatrix(ui->matrixB);
        tmp = tmp.trans();
        ui->matrixRes->setRowCount(column);
        ui->matrixRes->setColumnCount(row);
        MatrixToTable(tmp, ui->matrixRes);
        ui->matrixRes->resizeRowsToContents();
        ui->matrixRes->resizeColumnsToContents();
    }
}

void MainWindow::on_plus_clicked()
{
    int row1 = ui->matrixA->rowCount();
    int column1 = ui->matrixA->columnCount();
    int row2 = ui->matrixB->rowCount();
    int column2 = ui->matrixB->columnCount();
    if ((row1 != 0) && (column1 != 0) && (row2 != 0) && (column2 != 0)){
        Matrix tmp1 = TableToMatrix(ui->matrixA);
        Matrix tmp2 = TableToMatrix(ui->matrixB);
        Matrix res = tmp1 + tmp2;
        ui->matrixRes->setRowCount(row1);
        ui->matrixRes->setColumnCount(column1);
        MatrixToTable(res, ui->matrixRes);
        ui->matrixRes->resizeRowsToContents();
        ui->matrixRes->resizeColumnsToContents();
    }
}

void MainWindow::on_minus_clicked()
{
    int row1 = ui->matrixA->rowCount();
    int column1 = ui->matrixA->columnCount();
    int row2 = ui->matrixB->rowCount();
    int column2 = ui->matrixB->columnCount();
    if ((row1 != 0) && (column1 != 0) && (row2 != 0) && (column2 != 0)){
        Matrix tmp1 = TableToMatrix(ui->matrixA);
        Matrix tmp2 = TableToMatrix(ui->matrixB);
        Matrix res = tmp1 - tmp2;
        ui->matrixRes->setRowCount(row1);
        ui->matrixRes->setColumnCount(column1);
        MatrixToTable(res, ui->matrixRes);
        ui->matrixRes->resizeRowsToContents();
        ui->matrixRes->resizeColumnsToContents();
    }
}

void MainWindow::on_mul_clicked()
{
    int row1 = ui->matrixA->rowCount();
    int column1 = ui->matrixA->columnCount();
    int row2 = ui->matrixB->rowCount();
    int column2 = ui->matrixB->columnCount();
    if ((row1 != 0) && (column1 != 0) && (row2 != 0) && (column2 != 0)){
        Matrix tmp1 = TableToMatrix(ui->matrixA);
        Matrix tmp2 = TableToMatrix(ui->matrixB);
        Matrix res = tmp1 * tmp2;
        ui->matrixRes->setRowCount(row1);
        ui->matrixRes->setColumnCount(column2);
        MatrixToTable(res, ui->matrixRes);
        ui->matrixRes->resizeRowsToContents();
        ui->matrixRes->resizeColumnsToContents();
    }
}
