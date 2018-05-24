/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *matrixA;
    QTableWidget *matrixB;
    QTableWidget *matrixRes;
    QPushButton *plus;
    QPushButton *minus;
    QPushButton *mul;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *rowA;
    QSpinBox *colA;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *setA;
    QSpinBox *rowB;
    QLabel *label_7;
    QPushButton *setB;
    QLabel *label_8;
    QSpinBox *colB;
    QPushButton *detA;
    QLabel *LdetA;
    QPushButton *detB;
    QLabel *LdetB;
    QPushButton *mulAtonum;
    QLineEdit *numA;
    QPushButton *mulBtonum;
    QLineEdit *numB;
    QPushButton *transA;
    QPushButton *transB;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1031, 501);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        matrixA = new QTableWidget(centralWidget);
        matrixA->setObjectName(QStringLiteral("matrixA"));
        matrixA->setGeometry(QRect(10, 20, 281, 271));
        matrixB = new QTableWidget(centralWidget);
        matrixB->setObjectName(QStringLiteral("matrixB"));
        matrixB->setGeometry(QRect(380, 20, 281, 271));
        matrixRes = new QTableWidget(centralWidget);
        matrixRes->setObjectName(QStringLiteral("matrixRes"));
        matrixRes->setGeometry(QRect(740, 20, 281, 271));
        plus = new QPushButton(centralWidget);
        plus->setObjectName(QStringLiteral("plus"));
        plus->setGeometry(QRect(310, 50, 51, 51));
        QFont font;
        font.setPointSize(20);
        plus->setFont(font);
        minus = new QPushButton(centralWidget);
        minus->setObjectName(QStringLiteral("minus"));
        minus->setGeometry(QRect(310, 130, 51, 51));
        minus->setFont(font);
        mul = new QPushButton(centralWidget);
        mul->setObjectName(QStringLiteral("mul"));
        mul->setGeometry(QRect(310, 210, 51, 51));
        mul->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 111, 21));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(390, 0, 111, 21));
        label_2->setFont(font1);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(750, 0, 111, 21));
        label_3->setFont(font1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(690, 140, 21, 21));
        label_4->setFont(font);
        rowA = new QSpinBox(centralWidget);
        rowA->setObjectName(QStringLiteral("rowA"));
        rowA->setGeometry(QRect(10, 300, 61, 31));
        colA = new QSpinBox(centralWidget);
        colA->setObjectName(QStringLiteral("colA"));
        colA->setGeometry(QRect(10, 340, 61, 31));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 300, 81, 31));
        QFont font2;
        font2.setPointSize(10);
        label_5->setFont(font2);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 340, 101, 31));
        label_6->setFont(font2);
        setA = new QPushButton(centralWidget);
        setA->setObjectName(QStringLiteral("setA"));
        setA->setGeometry(QRect(200, 320, 75, 31));
        setA->setFont(font2);
        rowB = new QSpinBox(centralWidget);
        rowB->setObjectName(QStringLiteral("rowB"));
        rowB->setGeometry(QRect(380, 300, 61, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(450, 300, 81, 31));
        label_7->setFont(font2);
        setB = new QPushButton(centralWidget);
        setB->setObjectName(QStringLiteral("setB"));
        setB->setGeometry(QRect(570, 320, 75, 31));
        setB->setFont(font2);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(450, 340, 101, 31));
        label_8->setFont(font2);
        colB = new QSpinBox(centralWidget);
        colB->setObjectName(QStringLiteral("colB"));
        colB->setGeometry(QRect(380, 340, 61, 31));
        detA = new QPushButton(centralWidget);
        detA->setObjectName(QStringLiteral("detA"));
        detA->setGeometry(QRect(10, 380, 101, 31));
        detA->setFont(font2);
        LdetA = new QLabel(centralWidget);
        LdetA->setObjectName(QStringLiteral("LdetA"));
        LdetA->setGeometry(QRect(120, 380, 161, 31));
        detB = new QPushButton(centralWidget);
        detB->setObjectName(QStringLiteral("detB"));
        detB->setGeometry(QRect(380, 380, 101, 31));
        detB->setFont(font2);
        LdetB = new QLabel(centralWidget);
        LdetB->setObjectName(QStringLiteral("LdetB"));
        LdetB->setGeometry(QRect(490, 380, 161, 31));
        mulAtonum = new QPushButton(centralWidget);
        mulAtonum->setObjectName(QStringLiteral("mulAtonum"));
        mulAtonum->setGeometry(QRect(10, 420, 101, 31));
        mulAtonum->setFont(font2);
        numA = new QLineEdit(centralWidget);
        numA->setObjectName(QStringLiteral("numA"));
        numA->setGeometry(QRect(120, 420, 71, 31));
        mulBtonum = new QPushButton(centralWidget);
        mulBtonum->setObjectName(QStringLiteral("mulBtonum"));
        mulBtonum->setGeometry(QRect(380, 420, 101, 31));
        mulBtonum->setFont(font2);
        numB = new QLineEdit(centralWidget);
        numB->setObjectName(QStringLiteral("numB"));
        numB->setGeometry(QRect(490, 420, 71, 31));
        transA = new QPushButton(centralWidget);
        transA->setObjectName(QStringLiteral("transA"));
        transA->setGeometry(QRect(10, 460, 121, 31));
        transA->setFont(font2);
        transB = new QPushButton(centralWidget);
        transB->setObjectName(QStringLiteral("transB"));
        transB->setGeometry(QRect(380, 460, 121, 31));
        transB->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        plus->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        minus->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        mul->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\202\321\200\320\270\321\206\320\260 A", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\202\321\200\320\270\321\206\320\260 B", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \321\201\321\202\321\200\320\276\320\272", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \321\201\321\202\320\276\320\273\320\261\321\206\320\276\320\262", Q_NULLPTR));
        setA->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \321\201\321\202\321\200\320\276\320\272", Q_NULLPTR));
        setB->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \321\201\321\202\320\276\320\273\320\261\321\206\320\276\320\262", Q_NULLPTR));
        detA->setText(QApplication::translate("MainWindow", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\320\265\320\273\321\214", Q_NULLPTR));
        LdetA->setText(QString());
        detB->setText(QApplication::translate("MainWindow", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\320\265\320\273\321\214", Q_NULLPTR));
        LdetB->setText(QString());
        mulAtonum->setText(QApplication::translate("MainWindow", "\320\243\320\274\320\275\320\276\320\266\320\270\321\202\321\214 \320\275\320\260", Q_NULLPTR));
        mulBtonum->setText(QApplication::translate("MainWindow", "\320\243\320\274\320\275\320\276\320\266\320\270\321\202\321\214 \320\275\320\260", Q_NULLPTR));
        transA->setText(QApplication::translate("MainWindow", "\320\242\321\200\320\260\320\275\321\201\320\277\320\276\320\275\320\270\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
        transB->setText(QApplication::translate("MainWindow", "\320\242\321\200\320\260\320\275\321\201\320\277\320\276\320\275\320\270\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
