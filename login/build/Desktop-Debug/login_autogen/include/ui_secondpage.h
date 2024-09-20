/********************************************************************************
** Form generated from reading UI file 'secondpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDPAGE_H
#define UI_SECONDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondPage
{
public:
    QPushButton *exitButton;

    void setupUi(QWidget *SecondPage)
    {
        if (SecondPage->objectName().isEmpty())
            SecondPage->setObjectName(QString::fromUtf8("SecondPage"));
        SecondPage->resize(400, 300);
        exitButton = new QPushButton(SecondPage);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(140, 120, 88, 26));

        retranslateUi(SecondPage);

        QMetaObject::connectSlotsByName(SecondPage);
    } // setupUi

    void retranslateUi(QWidget *SecondPage)
    {
        SecondPage->setWindowTitle(QCoreApplication::translate("SecondPage", "Form", nullptr));
        exitButton->setText(QCoreApplication::translate("SecondPage", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondPage: public Ui_SecondPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDPAGE_H
