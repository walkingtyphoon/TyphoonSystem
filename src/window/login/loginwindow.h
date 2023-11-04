//
// Created by walki on 2023/11/4.
//

#ifndef TYPHOONSYSTEM_LOGINWINDOW_H
#define TYPHOONSYSTEM_LOGINWINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QWidget {
Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);

    ~LoginWindow() override;

private:
    Ui::LoginWindow *ui;
};


#endif //TYPHOONSYSTEM_LOGINWINDOW_H
