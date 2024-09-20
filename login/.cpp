#include ".h"
#include "ui_e.h"

Form1::Form1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form1)
{
    ui->setupUi(this);
}

Form1::~Form1()
{
    delete ui;
}
