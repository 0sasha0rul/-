#include "secondpage.h"
#include "ui_secondpage.h"
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
SecondPage::SecondPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondPage)
{
    ui->setupUi(this);
    setupLayout();

}


SecondPage::~SecondPage()
{
    delete ui;
}

void SecondPage::on_exitButton_clicked()
{
    // Закрываем текущее окно и возвращаемся к главному окну
    this->close();
}

void SecondPage::setupLayout()
{
    // настройка QComboBox для натсройки функций
    this->resize(500, 500);
    // Создание и установка макета для центрального виджета
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *mainLayout = new QVBoxLayout(centralWidget);

    QHBoxLayout *button_layout = new QHBoxLayout(centralWidget);
    // Добавление виджетов в макет


    button_layout->addWidget(ui->exitButton);

    mainLayout->addLayout(button_layout);

    // Установка макета
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);
    // Обновление размеров
    centralWidget->update();
    centralWidget->resize(centralWidget->sizeHint());
}
