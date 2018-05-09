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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *result_show;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_sign;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_div;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_0;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_exp;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_ln;
    QLabel *memory;
    QPushButton *pushButton_pow;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(601, 361);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        result_show = new QLabel(centralWidget);
        result_show->setObjectName(QStringLiteral("result_show"));
        result_show->setGeometry(QRect(0, 0, 301, 61));
        QFont font;
        font.setPointSize(20);
        result_show->setFont(font);
        result_show->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(0, 60, 61, 61));
        pushButton_clear->setFont(font);
        pushButton_clear->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_sign = new QPushButton(centralWidget);
        pushButton_sign->setObjectName(QStringLiteral("pushButton_sign"));
        pushButton_sign->setGeometry(QRect(60, 60, 61, 61));
        pushButton_sign->setFont(font);
        pushButton_sign->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_percent = new QPushButton(centralWidget);
        pushButton_percent->setObjectName(QStringLiteral("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(120, 60, 61, 61));
        pushButton_percent->setFont(font);
        pushButton_percent->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_div = new QPushButton(centralWidget);
        pushButton_div->setObjectName(QStringLiteral("pushButton_div"));
        pushButton_div->setGeometry(QRect(180, 60, 61, 61));
        pushButton_div->setFont(font);
        pushButton_div->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_mul = new QPushButton(centralWidget);
        pushButton_mul->setObjectName(QStringLiteral("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(180, 120, 61, 61));
        pushButton_mul->setFont(font);
        pushButton_mul->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 120, 61, 61));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(60, 120, 61, 61));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(120, 120, 61, 61));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(180, 180, 61, 61));
        pushButton_minus->setFont(font);
        pushButton_minus->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 180, 61, 61));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 180, 61, 61));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 180, 61, 61));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName(QStringLiteral("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(180, 240, 61, 61));
        pushButton_plus->setFont(font);
        pushButton_plus->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 240, 61, 61));
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 240, 61, 61));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 240, 61, 61));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_equal = new QPushButton(centralWidget);
        pushButton_equal->setObjectName(QStringLiteral("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(120, 300, 61, 61));
        pushButton_equal->setFont(font);
        pushButton_equal->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 300, 61, 61));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_dot = new QPushButton(centralWidget);
        pushButton_dot->setObjectName(QStringLiteral("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(60, 300, 61, 61));
        pushButton_dot->setFont(font);
        pushButton_dot->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_tan = new QPushButton(centralWidget);
        pushButton_tan->setObjectName(QStringLiteral("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(240, 240, 61, 61));
        pushButton_tan->setFont(font);
        pushButton_tan->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_sin = new QPushButton(centralWidget);
        pushButton_sin->setObjectName(QStringLiteral("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(240, 120, 61, 61));
        pushButton_sin->setFont(font);
        pushButton_sin->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_exp = new QPushButton(centralWidget);
        pushButton_exp->setObjectName(QStringLiteral("pushButton_exp"));
        pushButton_exp->setGeometry(QRect(240, 60, 61, 61));
        pushButton_exp->setFont(font);
        pushButton_exp->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_cos = new QPushButton(centralWidget);
        pushButton_cos->setObjectName(QStringLiteral("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(240, 180, 61, 61));
        pushButton_cos->setFont(font);
        pushButton_cos->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_ln = new QPushButton(centralWidget);
        pushButton_ln->setObjectName(QStringLiteral("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(240, 300, 61, 61));
        pushButton_ln->setFont(font);
        pushButton_ln->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        memory = new QLabel(centralWidget);
        memory->setObjectName(QStringLiteral("memory"));
        memory->setGeometry(QRect(300, 0, 301, 361));
        QFont font1;
        font1.setPointSize(18);
        memory->setFont(font1);
        memory->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignTop | AlignLeft';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        pushButton_pow = new QPushButton(centralWidget);
        pushButton_pow->setObjectName(QStringLiteral("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(180, 300, 61, 61));
        pushButton_pow->setFont(font);
        pushButton_pow->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        result_show->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("MainWindow", "AC", Q_NULLPTR));
        pushButton_sign->setText(QApplication::translate("MainWindow", "+/-", Q_NULLPTR));
        pushButton_percent->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        pushButton_div->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
        pushButton_mul->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        pushButton_equal->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_dot->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        pushButton_tan->setText(QApplication::translate("MainWindow", "TAN", Q_NULLPTR));
        pushButton_sin->setText(QApplication::translate("MainWindow", "SIN", Q_NULLPTR));
        pushButton_exp->setText(QApplication::translate("MainWindow", "EXP", Q_NULLPTR));
        pushButton_cos->setText(QApplication::translate("MainWindow", "COS", Q_NULLPTR));
        pushButton_ln->setText(QApplication::translate("MainWindow", "LN", Q_NULLPTR));
        memory->setText(QString());
        pushButton_pow->setText(QApplication::translate("MainWindow", "^", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
