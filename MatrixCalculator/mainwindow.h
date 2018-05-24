#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <matrix.h>
#include <functions.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_setA_clicked();

    void on_setB_clicked();

    void on_detA_clicked();

    void on_detB_clicked();

    void on_mulAtonum_clicked();

    void on_mulBtonum_clicked();

    void on_transA_clicked();

    void on_transB_clicked();

    void on_plus_clicked();

    void on_minus_clicked();

    void on_mul_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
