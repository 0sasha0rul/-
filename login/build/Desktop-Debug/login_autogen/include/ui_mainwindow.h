/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *login_button;
    QLineEdit *password_button;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_login;
    QLabel *label_password;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        login_button = new QLineEdit(centralwidget);
        login_button->setObjectName(QString::fromUtf8("login_button"));
        login_button->setGeometry(QRect(290, 160, 231, 51));
        login_button->setStyleSheet(QString::fromUtf8("font: 600 11pt \"Ubuntu Sans\";\n"
"\n"
"color: rgb(153, 193, 241);"));
        password_button = new QLineEdit(centralwidget);
        password_button->setObjectName(QString::fromUtf8("password_button"));
        password_button->setGeometry(QRect(290, 260, 231, 51));
        password_button->setStyleSheet(QString::fromUtf8("\n"
"font: 600 11pt \"Ubuntu Sans\";\n"
"color: rgb(153, 193, 241);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 340, 91, 31));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(53, 132, 228);\n"
"font: 600 9pt \"Ubuntu Sans\";"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 380, 261, 20));
        label_login = new QLabel(centralwidget);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        label_login->setGeometry(QRect(350, 130, 111, 21));
        label_password = new QLabel(centralwidget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(370, 230, 66, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        login_button->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>login</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        login_button->setText(QString());
        password_button->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label->setText(QString());
        label_login->setText(QCoreApplication::translate("MainWindow", "\320\273\320\276\320\263\320\270\320\275", nullptr));
        label_password->setText(QCoreApplication::translate("MainWindow", "\320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
