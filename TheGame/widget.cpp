#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->resize(600,640);          /// Задаем размеры виджета, то есть окна
    this->setFixedSize(600,640);    /// Фиксируем размеры виджета

    scene = new QGraphicsScene();   /// Инициализируем графическую сцену

    ui->graphicsView->setScene(scene);  /// Устанавливаем графическую сцену в graphicsView
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);    /// Устанавливаем сглаживание
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); /// Отключаем скроллбар по вертикали
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); /// Отключаем скроллбар по горизонтали

    scene->setSceneRect(-250,-250,500,500); /// Устанавливаем область графической сцены

    timer = new QTimer();
    timerCreateApple = new QTimer();

    gameState = GAME_STOPED;

    pauseKey = new QShortcut(this);
    pauseKey->setKey(Qt::Key_Pause);
    connect(pauseKey, &QShortcut::activated, this, &Widget::slotPause);


}

Widget::~Widget()
{
    delete ui;
}

void Widget::slotDeleteApple(QGraphicsItem *item)
{
    /* Получив сигнал от Мухи
     * Перебираем весь список яблок и удаляем найденное яблоко
     * */
    foreach (QGraphicsItem *apple, apples) {
        if(apple == item){
            scene->removeItem(apple);   // Удаляем со сцены
            apples.removeOne(apple);     // Удаляем из списка
            delete apple;               // Вообще удаляем
            ui->lcdNumber->display(count++);    /* Увеличиваем счёт на единицу
                                                 * и отображаем на дисплее
                                                 * */
        }
    }
}

void Widget::slotCreateApple()
{
    Apple *apple = new Apple(); // Создаём яблоко
    scene->addItem(apple);      // Помещаем его в сцену со случайной позицией
    apple->setPos((qrand() % (251)) * ((qrand()%2 == 1)?1:-1),
                  (qrand() % (251)) * ((qrand()%2 == 1)?1:-1));
    apple->setZValue(-1);       /* Помещаем яблоко ниже Мухи, то есть Муха
                                 * на сцене будет выше яблок
                                 * */
    apples.append(apple);       // Добавляем Муху в Список
}

void Widget::on_pushButton_clicked()
{
    count = 0;
    ui->lcdNumber->display(count);
    Character *isaac = new Character();      /// Инициализируем муху

    scene->addItem(isaac);       /// Добавляем на сцену треугольник
    isaac->setPos(0,0);          /// Устанавливаем треугольник в центр сцены

    //spider = new Spider(triangle);  // Инициализируем паука
    //scene->addItem(spider);         // Добавляем паука на сцену
    //spider->setPos(180,180);        // Устанавливаем позицию паука

    /* Подключаем сигнал от паука на проверку состояния GameOver
     * */
    //connect(spider, &Spider::signalCheckGameOver, this, &Widget::slotGameOver);

    /** Инициализируем таймер и вызываем слот обработки сигнала таймера
     * у Треугольника 100 раз в секунду.
     * Управляя скоростью отсчётов, соответственно управляем скоростью
     * изменения состояния графической сцены
     * */
    connect(timer, &QTimer::timeout, isaac, &Character::slotGameTimer);
    timer->start(1000 / 100);

    /** Раз в секунду отсылаем сигнал на создание яблока в игре
     * */
    connect(timerCreateApple, &QTimer::timeout, this, &Widget::slotCreateApple);
    timerCreateApple->start(1000);

    /** Подключаем сигнал от Мухи, в котором передаются Объекты, на которые
     * наткнулась Муха
     * */
    connect(isaac, &Character::signalCheckItem, this, &Widget::slotDeleteApple);

    ui->pushButton->setEnabled(false);

    gameState = GAME_STARTED;
}

void Widget::slotGameOver()
{
    /* Если игра окончена
     * Отключаем все таймеры
     * */
    timer->stop();
    timerCreateApple->stop();
    QMessageBox::warning(this,
                         "Game Over",
                         "Мои соболезнования, но Вас только что слопали");
    /* Отключаем все сигналы от слотов
     * */
    disconnect(timerCreateApple, &QTimer::timeout, this, &Widget::slotCreateApple);
    disconnect(isaac, &Character::signalCheckItem, this, &Widget::slotDeleteApple);
    disconnect(spider, &Spider::signalCheckGameOver, this, &Widget::slotGameOver);
    /* И удаляем все объекты со сцены
     * */
    spider->deleteLater();
    isaac->deleteLater();

    foreach (QGraphicsItem *apple, apples) {
        scene->removeItem(apple);   // Удаляем со сцены
        apples.removeOne(apple);    // Удаляем из списка
        delete apple;               // Вообще удаляем
    }
    /* Активируем кнопку старта игры
     * */
    ui->pushButton->setEnabled(true);

    gameState = GAME_STOPED; // Устанавливаем состояние игры в GAME_STOPED
}

void Widget::slotPause()
{
    /* Выполняем проверку на состояние игры,
     * если игра не запущена, то игнорируем Паузу.
     * В противном случае или запускаем, или останавливаем все таймеры
     * */
    if(gameState == GAME_STARTED){
        if(timer->isActive()){
            timer->stop();
            timerCreateApple->stop();
            spider->pause();
        } else {
            timer->start(1000/100);
            timerCreateApple->start(1000);
            spider->pause();
        }
    }
}
