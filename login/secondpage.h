#ifndef SECONDPAGE_H
#define SECONDPAGE_H

#include <QWidget>
#include <QMainWindow>
namespace Ui {
class SecondPage;
}

class SecondPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondPage(QWidget *parent = nullptr);
    ~SecondPage();

private slots:
    void on_exitButton_clicked();
    void setupLayout();

private:
    Ui::SecondPage *ui;
};

#endif // SECONDPAGE_H
