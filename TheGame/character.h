#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <QColor>

/* Подключаем библиотеку, отвечающую за использование WinAPI
 * Данная библиотека необходима для асинхронной проверки состояния клавиш
 * */
#include <windows.h>

class Character : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit Character(QObject *parent = 0);
    ~Character();

signals:
    /* Сигнал, который передаётся в ядро игры с элементом QGraphicsItem,
     * на который наткнулась муха, и требуется принять решение о том,
     * что с этим элементом делать.
     * */
    void signalCheckItem(QGraphicsItem *item);

public slots:
    void slotGameTimer(); /// Слот, который отвечает за обработку перемещения треугольника

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    qreal angle;        /// Угол поворота графического объекта
    int direction;          // Номер положения ножек мухи
    //int countForSteps;  // Счётчик для отсчета тиков таймера, при которых мы нажимали на кнопки

};

#endif // CHARACTER_H
