#ifndef _H
#define _H

#include <QWidget>

namespace Ui {
class Form1;
}

class Form1 : public QWidget
{
    Q_OBJECT

public:
    explicit Form1(QWidget *parent = nullptr);
    ~Form1();

private:
    Ui::Form1 *ui;
};

#endif // _H
