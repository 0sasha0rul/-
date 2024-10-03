#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QVBoxLayout>
#include <QMessageBox>

class SecondWindow : public QWidget {
public:
    SecondWindow(QWidget *parent = nullptr) : QWidget(parent) {
        setWindowTitle("Второе окно");

        QVBoxLayout *layout = new QVBoxLayout(this);
        QPushButton *exitButton = new QPushButton("Выход", this);

        layout->addWidget(exitButton);
        setLayout(layout);

        connect(exitButton, &QPushButton::clicked, this, &QWidget::close);
    }
};

class LoginWindow : public QWidget {
public:
    LoginWindow(QWidget *parent = nullptr) : QWidget(parent) {
        setWindowTitle("Окно входа");

        QVBoxLayout *layout = new QVBoxLayout(this);

        QLabel *usernameLabel = new QLabel("Имя пользователя:", this);
        QLineEdit *usernameEdit = new QLineEdit(this);

        QLabel *passwordLabel = new QLabel("Пароль:", this);
        QLineEdit *passwordEdit = new QLineEdit(this);
        passwordEdit->setEchoMode(QLineEdit::Password); // Скрыть ввод пароля

        QPushButton *loginButton = new QPushButton("Войти", this);

        layout->addWidget(usernameLabel);
        layout->addWidget(usernameEdit);
        layout->addWidget(passwordLabel);
        layout->addWidget(passwordEdit);
        layout->addWidget(loginButton);

        setLayout(layout);

        connect(loginButton, &QPushButton::clicked, [this, usernameEdit, passwordEdit]() {
            // Здесь можно добавить проверку имени пользователя и пароля
            if (usernameEdit->text() == "user" && passwordEdit->text() == "password") {
                // Если вход успешен, открываем второе окно
                SecondWindow *secondWindow = new SecondWindow();
                secondWindow->show();
                this->close(); // Закрыть окно входа
            } else {
                QMessageBox::warning(this, "Ошибка", "Неверное имя пользователя или пароль.");
            }
        });
    }
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    LoginWindow loginWindow;
    loginWindow.show();

    return app.exec();
}
