#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
using namespace std;
class Matrix
{
    int row, column;
    vector <vector <float>> matrix;
public:
    Matrix();
    Matrix(int, int);
    ~Matrix();
    void set(float, int, int);
    float get(int, int);
    Matrix minor(int, int);
    float det();
    Matrix mulnum(float);
    Matrix trans();
    Matrix operator+(const Matrix &);
    Matrix operator-(const Matrix &);
    Matrix operator*(const Matrix &);
};

#endif // MATRIX_H
