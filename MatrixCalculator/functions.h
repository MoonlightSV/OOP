#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <matrix.h>
#include <QTableWidget>
#include <QErrorMessage>

void ErrorMsg(int);
Matrix TableToMatrix(QTableWidget *);
void MatrixToTable(Matrix &, QTableWidget *);

#endif // FUNCTIONS_H
