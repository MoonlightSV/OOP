#include "character.h"

Character::Character(QObject *parent) :
    QObject(parent), QGraphicsItem()
{
    direction = 4;
    angle = 0;      // Задаём угол поворота графического объекта
    //steps = 1;      // Задаём стартовое положение ножек мухи
    //countForSteps = 0;      // Счётчик для отсчета тиков таймера, при которых мы нажимали на кнопки
    setRotation(angle);     // Устанавливаем угол поворота графического объекта
}

Character::~Character()
{

}

QRectF Character::boundingRect() const
{
    return QRectF(-50,-50,100,100);   /// Ограничиваем область, в которой лежит треугольник
}

void Character::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
//    // Рисуем ножки, без ножек же муха не сможет ползать
//    painter->setPen(QPen(Qt::black, 2));
//    if(steps == 0){     // Первое положение ножек
//        // Left 1
//        painter->drawLine(-24,-37,-22,-25);
//        painter->drawLine(-22,-25,-17,-15);
//        painter->drawLine(-17,-15,-10,-5);
//        // Right 1
//        painter->drawLine(37,-28,28,-18);
//        painter->drawLine(28,-18,24,-8);
//        painter->drawLine(24,-8,10,-5);

//        // Left 2
//        painter->drawLine(-35,-20,-25,-11);
//        painter->drawLine(-25,-11,-14,-5);
//        painter->drawLine(-14,-5,0,5);
//        // Right 2
//        painter->drawLine(37,-12,32,-4);
//        painter->drawLine(32,-4,24,2);
//        painter->drawLine(24,2,0,5);

//        // Left 3
//        painter->drawLine(-35,35,-26,24);
//        painter->drawLine(-26,24,-16,16);
//        painter->drawLine(-16,16,0,0);
//        // Right 3
//        painter->drawLine(37,26,32,17);
//        painter->drawLine(32,17,24,8);
//        painter->drawLine(24,8,0,0);
//    } else if (steps == 1){     // Второе положение ножек
//        // Left 1
//        painter->drawLine(-32,-32,-25,-22);
//        painter->drawLine(-25,-22,-20,-12);
//        painter->drawLine(-20,-12,-10,-5);
//        // Right 1
//        painter->drawLine(32,-32,25,-22);
//        painter->drawLine(25,-22,20,-12);
//        painter->drawLine(20,-12,10,-5);

//        // Left 2
//        painter->drawLine(-39,-15,-30,-8);
//        painter->drawLine(-30,-8,-18,-2);
//        painter->drawLine(-18,-2,0,5);
//        // Right 2
//        painter->drawLine(39,-15,30,-8);
//        painter->drawLine(30,-8,18,-2);
//        painter->drawLine(18,-2,0,5);

//        // Left 3
//        painter->drawLine(-39,30,-30,20);
//        painter->drawLine(-30,20,-20,12);
//        painter->drawLine(-20,12,0,0);
//        // Right 3
//        painter->drawLine(39,30,30,20);
//        painter->drawLine(30,20,20,12);
//        painter->drawLine(20,12,0,0);
//    } else if (steps == 2){     // Третье положение ножек
//        // Left 1
//        painter->drawLine(-37,-28,-28,-18);
//        painter->drawLine(-28,-18,-24,-8);
//        painter->drawLine(-24,-8,-10,-5);
//        // Right 1
//        painter->drawLine(24,-37,22,-25);
//        painter->drawLine(22,-25,17,-15);
//        painter->drawLine(17,-15,10,-5);

//        // Left 2
//        painter->drawLine(-37,-12,-32,-4);
//        painter->drawLine(-32,-4,-24,2);
//        painter->drawLine(-24,2,0,5);
//        // Right 2
//        painter->drawLine(35,-20,25,-11);
//        painter->drawLine(25,-11,14,-5);
//        painter->drawLine(14,-5,0,5);

//        // Left 3
//        painter->drawLine(-37,26,-32,17);
//        painter->drawLine(-32,17,-24,8);
//        painter->drawLine(-24,8,0,0);
//        // Right 3
//        painter->drawLine(35,35,26,24);
//        painter->drawLine(26,24,16,16);
//        painter->drawLine(16,16,0,0);
//    }
//    // Усики
//    QPainterPath path(QPointF(-5,-34));
//    path.cubicTo(-5,-34, 0,-36,0,-30);
//    path.cubicTo(0,-30, 0,-36,5,-34);
//    painter->setBrush(Qt::NoBrush);
//    painter->drawPath(path);

//    painter->setPen(QPen(Qt::black, 1));
//    // Тушка
//    painter->setBrush(Qt::black);
//    painter->drawEllipse(-15, -20, 30, 50);
//    // Голова
//    painter->drawEllipse(-15, -30, 30, 20);
//    // Глазища
//    painter->setBrush(Qt::green);
//    painter->drawEllipse(-15, -27, 12, 15);
//    painter->drawEllipse(3, -27, 12, 15);

//    // Левое крылище
//    QPainterPath path2(QPointF(-10, -10));
//    path2.cubicTo(-18, -10, -30, 10, -25, 35);
//    path2.cubicTo(-25,35,-20,50,-15,40);
//    path2.cubicTo(-15,40,0,20,-3,5 );
//    path2.cubicTo(-3,5, -8,8,-10,-10);
//    painter->setBrush(Qt::white);
//    painter->drawPath(path2);

//    // Правое крылище
//    QPainterPath path3(QPointF(10, -10));
//    path3.cubicTo(18, -10, 30, 10, 25, 35);
//    path3.cubicTo(25,35,20,50,15,40);
//    path3.cubicTo(15,40,0,20,3,5 );
//    path3.cubicTo(3,5, 8,8,10,-10);
//    painter->setBrush(Qt::white);
//    painter->drawPath(path3);

    if (direction == 1) {
        //Head
        painter->setBrush(QColor(255,192,203));
        painter->drawEllipse(-20, -20, 40, 40);

        //Tears
        QPainterPath tearR(QPointF(-2, -5));
        tearR.lineTo(-2,19);
        tearR.cubicTo(-2,19,-8,19,-8,15);
        tearR.lineTo(-8,-5);
        painter->setPen(QColor(135,206,250));
        painter->setBrush(QColor(135,206,250));
        painter->drawPath(tearR);

        //Eyes
        painter->setPen(Qt::black);
        painter->setBrush(Qt::black);
        painter->drawEllipse(-10, -10, 10, 10);
        painter->setBrush(Qt::white);
        painter->drawEllipse(-9, -9, 5, 5);

        //Mouth
        QPainterPath mouth(QPointF(-10, 10));
        mouth.cubicTo(-10,10,-10,5,-15,5);
        mouth.lineTo(-19,5);
        mouth.cubicTo(-19,5,-19,10,-15,10);
        mouth.lineTo(-10,10);
        painter->drawPath(mouth);

        //Body
        QPainterPath body(QPointF(-7,20));
        body.cubicTo(-7,20,-13,20,-13,32);
        body.cubicTo(-13,32,-13,35,-10,35);
        body.cubicTo(-10,35,-7,35,-7,28);
        body.lineTo(-7,38);
        body.cubicTo(-7,38,-7,41,-4,41);
        body.cubicTo(-4,41,-1,41,-1,38);
        body.lineTo(0,32);
        body.lineTo(1,38);
        body.cubicTo(1,38,1,41,4,41);
        body.cubicTo(4,41,7,41,7,38);
        body.lineTo(7,28);
        body.cubicTo(7,28,7,35,10,35);
        body.cubicTo(10,35,13,35,13,32);
        body.cubicTo(13,32,13,20,7,20);

        painter->setBrush(QColor(255,192,203));
        painter->drawPath(body);
    }
    else if (direction == 2) {
        //Head
        painter->setBrush(QColor(255,192,203));
        painter->drawEllipse(-20, -20, 40, 40);

        //Tears
        QPainterPath tearL(QPointF(2, -5));
        tearL.lineTo(2,19);
        tearL.cubicTo(2,19,8,19,8,15);
        tearL.lineTo(8,-5);
        painter->setPen(QColor(135,206,250));
        painter->setBrush(QColor(135,206,250));
        painter->drawPath(tearL);

        painter->setPen(Qt::black);
        painter->setBrush(Qt::black);
        painter->drawEllipse(0, -10, 10, 10);
        painter->setBrush(Qt::white);
        painter->drawEllipse(1, -9, 5, 5);

        //Mouth
        QPainterPath mouth(QPointF(10, 10));
        mouth.cubicTo(10,10,10,5,15,5);
        mouth.lineTo(19,5);
        mouth.cubicTo(19,5,19,10,15,10);
        mouth.lineTo(10,10);
        painter->drawPath(mouth);

        //Body
        QPainterPath body(QPointF(-7,20));
        body.cubicTo(-7,20,-13,20,-13,32);
        body.cubicTo(-13,32,-13,35,-10,35);
        body.cubicTo(-10,35,-7,35,-7,28);
        body.lineTo(-7,38);
        body.cubicTo(-7,38,-7,41,-4,41);
        body.cubicTo(-4,41,-1,41,-1,38);
        body.lineTo(0,32);
        body.lineTo(1,38);
        body.cubicTo(1,38,1,41,4,41);
        body.cubicTo(4,41,7,41,7,38);
        body.lineTo(7,28);
        body.cubicTo(7,28,7,35,10,35);
        body.cubicTo(10,35,13,35,13,32);
        body.cubicTo(13,32,13,20,7,20);

        painter->setBrush(QColor(255,192,203));
        painter->drawPath(body);
    }
    else if (direction == 3) {
        //Head
        painter->setBrush(QColor(255,192,203));
        painter->drawEllipse(-20, -20, 40, 40);

        //Body
        QPainterPath body(QPointF(-7,20));
        body.cubicTo(-7,20,-13,20,-13,32);
        body.cubicTo(-13,32,-13,35,-10,35);
        body.cubicTo(-10,35,-7,35,-7,28);
        body.lineTo(-7,38);
        body.cubicTo(-7,38,-7,41,-4,41);
        body.cubicTo(-4,41,-1,41,-1,38);
        body.lineTo(0,32);
        body.lineTo(1,38);
        body.cubicTo(1,38,1,41,4,41);
        body.cubicTo(4,41,7,41,7,38);
        body.lineTo(7,28);
        body.cubicTo(7,28,7,35,10,35);
        body.cubicTo(10,35,13,35,13,32);
        body.cubicTo(13,32,13,20,7,20);

        painter->setBrush(QColor(255,192,203));
        painter->drawPath(body);
    }
    else if (direction == 4) {
        //Head
        painter->setBrush(QColor(255,192,203));
        painter->drawEllipse(-20, -20, 40, 40);

        //Tears
        QPainterPath tearL(QPointF(-7, -5));
        QPainterPath tearR(QPointF(7, -5));
        tearL.lineTo(-7,18);
        tearL.cubicTo(-7,18,-13,18,-13,8);
        tearL.lineTo(-13,-5);
        tearR.lineTo(7,18);
        tearR.cubicTo(7,18,13,18,13,8);
        tearR.lineTo(13,-5);
        painter->setPen(QColor(135,206,250));
        painter->setBrush(QColor(135,206,250));
        painter->drawPath(tearL);
        painter->drawPath(tearR);

        //Eyes
        painter->setPen(Qt::black);
        painter->setBrush(Qt::black);
        painter->drawEllipse(-15, -10, 10, 10);
        painter->drawEllipse(5, -10, 10, 10);
        painter->setBrush(Qt::white);
        painter->drawEllipse(-14, -9, 5, 5);
        painter->drawEllipse(6, -9, 5, 5);

        //Mouth
        QPainterPath mouth(QPointF(-5, 10));
        mouth.cubicTo(-5,10,-5,5,0,5);
        mouth.cubicTo(0,5,5,5,5,10);
        mouth.lineTo(-5,10);
        painter->drawPath(mouth);

        //Body
        QPainterPath body(QPointF(-7,20));
        body.cubicTo(-7,20,-13,20,-13,32);
        body.cubicTo(-13,32,-13,35,-10,35);
        body.cubicTo(-10,35,-7,35,-7,28);
        body.lineTo(-7,38);
        body.cubicTo(-7,38,-7,41,-4,41);
        body.cubicTo(-4,41,-1,41,-1,38);
        body.lineTo(0,32);
        body.lineTo(1,38);
        body.cubicTo(1,38,1,41,4,41);
        body.cubicTo(4,41,7,41,7,38);
        body.lineTo(7,28);
        body.cubicTo(7,28,7,35,10,35);
        body.cubicTo(10,35,13,35,13,32);
        body.cubicTo(13,32,13,20,7,20);

        painter->setBrush(QColor(255,192,203));
        painter->drawPath(body);
    }

//    QPainterPath path(QPointF(-15, 0));
//    path.cubicTo(-15, 0, 0, -30, 15, 0);
//    path.lineTo(-15,0);
//    path.cubicTo(15,40,0,20,3,5 );
//    path.cubicTo(3,5, 8,8,10,-10);
//    painter->setBrush(Qt::white);
//    painter->drawPath(path);

    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void Character::slotGameTimer()
{
    /* Проверяем, нажата ли была какая-либо из кнопок управления объектом.
     * Прежде чем считать шажки
     * */
    if(GetAsyncKeyState(65) ||
       GetAsyncKeyState(68) ||
       GetAsyncKeyState(87) ||
       GetAsyncKeyState(83))
    {
        /* Поочерёдно выполняем проверку на нажатие клавиш
         * с помощью функции асинхронного получения состояния клавиш,
         * которая предоставляется WinAPI
         * */
        if(GetAsyncKeyState(65)){
            direction = 1;
            setPos(mapToParent(-2, 0));
//            angle -= 5;        // Задаём поворот на 5 градусов влево
//            setRotation(angle); // Поворачиваем объект
        }
        if(GetAsyncKeyState(68)){
            direction = 2;
            setPos(mapToParent(2, 0));
//            angle += 5;        // Задаём поворот на 5 градусов вправо
//            setRotation(angle); // Поворачиваем объект
        }
        if(GetAsyncKeyState(87)){
            direction = 3;
            setPos(mapToParent(0, -2));     /* Продвигаем объект на 5 пискселей вперёд
                                             * перетранслировав их в координатную систему
                                             * графической сцены
                                             * */
        }
        if(GetAsyncKeyState(83)){
            direction = 4;
            setPos(mapToParent(0, 2));      /* Продвигаем объект на 5 пискселей назад
                                             * перетранслировав их в координатную систему
                                             * графической сцены
                                             * */
        }

        update(QRectF(-40,-50,80,100));

        // Двигаем ножками, Dance, dance, Baby !!!
        //countForSteps++;
//        if(countForSteps == 4){
//            steps = 2;
//            update(QRectF(-40,-50,80,100));
//        } else if (countForSteps == 8){
//            steps = 1;
//            update(QRectF(-40,-50,80,100));
//        } else if (countForSteps == 12){
//            steps = 0;
//            update(QRectF(-40,-50,80,100));
//        } else if (countForSteps == 16) {
//            steps = 1;
//            update(QRectF(-40,-50,80,100));
//            countForSteps = 0;
//        }

        QList<QGraphicsItem *> foundItems = scene()->items(QPolygonF()
                                                               << mapToScene(0, 0)
                                                               << mapToScene(-20, -20)
                                                               << mapToScene(20, -20));
        /* После чего проверяем все элементы.
         * Один из них будет сама Муха - с ней ничего не делаем.
         * А с остальными высылаем сигнал в ядро игры
         * */
        foreach (QGraphicsItem *item, foundItems) {
            if (item == this)
                continue;
            emit signalCheckItem(item);
        }
    }

    /* Проверка выхода за границы поля
     * Если объект выходит за заданные границы, то возвращаем его назад
     * */
    if(this->x() - 10 < -250){
        this->setX(-240);       // слева
    }
    if(this->x() + 10 > 250){
        this->setX(240);        // справа
    }

    if(this->y() - 10 < -250){
        this->setY(-240);       // сверху
    }
    if(this->y() + 10 > 250){
        this->setY(240);        // снизу
    }
}
