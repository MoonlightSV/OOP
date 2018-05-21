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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
