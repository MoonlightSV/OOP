#include "matrix.h"

Matrix::Matrix()
{

}

Matrix::Matrix(int r, int c)
{
    if (r > 0 && c > 0) {
        row = r;
        column = c;
        matrix.resize(row);
        for (int i = 0; i < matrix.size(); i++)
            matrix[i].resize(column);

    }
}

Matrix::~Matrix()
{
    for (int i = 0; i < row; i++)
        this->matrix[i].clear();
    this->matrix.clear();
}

void Matrix::set(float val, int i, int j)
{
    if (i >= 0 && j >= 0 && i < matrix.size() && j < matrix[0].size())
        matrix[i][j] = val;
}

float Matrix::get(int i, int j)
{
    if (i >= 0 && j >= 0 && i < matrix.size() && j < matrix[0].size())
        return matrix[i][j];
}

Matrix Matrix::minor(int r, int c)
{
    if ((r <= this->row) && (c <= this->column)) {
        Matrix tmp(this->row, this->column);
        tmp.matrix = this->matrix;
        for (int i = 0; i < tmp.row; i++)
            tmp.matrix[i].erase(tmp.matrix[i].begin() + c);
        tmp.matrix.erase(tmp.matrix.begin() + r);
        tmp.row--;
        tmp.column--;
        return tmp;
    }
}



float Matrix::det()
{
    if (this->row == this->column) {
        float det = 0;
        if (this->row == 1)
            det = this->matrix[0][0];
        else {
            if (this->row == 2)
                det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
            else {
                if (this->row == 3)
                    det = (matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1]) -
                    (matrix[0][2] * matrix[1][1] * matrix[2][0] + matrix[1][0] * matrix[0][1] * matrix[2][2] + matrix[0][0] * matrix[2][1] * matrix[1][2]);
                else {
                    for (int i = 0; i < this->matrix[0].size(); i++) {
                        if (i % 2 == 0)
                            det = det + matrix[0][i] * this->minor(0, i).det();
                        else
                            det = det - matrix[0][i] * this->minor(0, i).det();
                    }
                }
            }
        }
        return det;
    }
}

