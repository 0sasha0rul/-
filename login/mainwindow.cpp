#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondpage.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
