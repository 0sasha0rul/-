#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondpage.h"
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupLayout();

    // 21.09 Создать все поля и скомпоновать их в конструкторе (Layout)
    // 28.09 Есть область видимости метода, а есть область видимости класса.
    //       И важно понимать в каком месте какое поле должно быть объявлено.
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username = ui->login_button->text();
    QString password = ui->password_button->text();


    if (username == "admin" && password == "1234") {
        // Создаем новую страницу и показываем её
        SecondPage *secondPage = new SecondPage();
        secondPage->show();
        this->hide(); // Скрываем главное окно
    } else {
        ui->label->setText("Неверный логин или пароль.");
    }
}

void MainWindow::setupLayout()
{

    this->resize(500, 500);
    // Создаем центральный виджет
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *mainLayout = new QVBoxLayout(centralWidget);

    QHBoxLayout *layout_login= new QHBoxLayout(centralWidget);
    QHBoxLayout *layout_password = new QHBoxLayout(centralWidget);
    QHBoxLayout *layout_label = new QHBoxLayout(centralWidget);
    QHBoxLayout *layout_pushbutton = new QHBoxLayout(centralWidget);

    // Добавление виджетов в макет
    layout_login-> addWidget(ui->label_login);
    layout_login-> addWidget(ui->login_button);
    layout_password-> addWidget(ui->label_password);
    layout_password-> addWidget(ui->password_button);
    layout_pushbutton -> addWidget (ui -> pushButton);
    layout_label-> addWidget(ui->label);
    ui->label->setMaximumSize(200, 20);

    mainLayout->addLayout(layout_login);
    mainLayout->addLayout(layout_password);
    mainLayout->addLayout(layout_pushbutton);
    mainLayout->addLayout(layout_label);

    mainLayout->setStretchFactor(layout_login, 4);
    mainLayout->setStretchFactor(layout_password, 4);
    mainLayout->setStretchFactor(layout_pushbutton, 3);
    mainLayout->setStretchFactor(layout_label, 0);
    // Установка макета
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);
    // Обновление размеров
    centralWidget->update();
    centralWidget->resize(centralWidget->sizeHint());


}
