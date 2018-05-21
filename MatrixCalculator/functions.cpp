#include "functions.h"

Matrix TableToMatrix(QTableWidget *table)
{
    int row = table->rowCount();
    int column = table->columnCount();
    Matrix tmp(row, column);
    for (int i = 0; i < row; i++) {
        for (int j = 0;j < column; j++) {
            bool ok;//переменная отвечающая за успешное конвертирование строки в число
            float t = (table->item(i, j)->text()).toFloat(&ok);//извлекаем содержимое ячейки [i][j]
            tmp.set(t, i, j);
        }
    }
    return tmp;
}


void MatrixToTable(Matrix &matrix, QTableWidget *table)
{
    for (int i = 0; i < table->rowCount(); i++) {
        for (int j = 0; j < table->columnCount(); j++) {
            QString str = QString::number(matrix.get(i, j), 'f', 3);
            table->setItem(i, j, new QTableWidgetItem(str));
        }
    }
}
