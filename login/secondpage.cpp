#include "secondpage.h"
#include "ui_secondpage.h"

SecondPage::SecondPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SecondPage)
{
    ui->setupUi(this);
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
