#ifndef SECONDPAGE_H
#define SECONDPAGE_H

#include <QWidget>

namespace Ui {
class SecondPage;
}

class SecondPage : public QWidget
{
    Q_OBJECT

public:
    explicit SecondPage(QWidget *parent = nullptr);
    ~SecondPage();

private slots:
    void on_exitButton_clicked();

private:
    Ui::SecondPage *ui;
};

#endif // SECONDPAGE_H
