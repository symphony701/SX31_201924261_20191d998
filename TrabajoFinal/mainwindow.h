#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "logeador.h"
#include "Lista.h"
#include "register.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_clicked();

    void on_lineMail_cursorPositionChanged(int arg1, int arg2);

    void on_login_2_clicked();

private:
    Ui::MainWindow *ui;
    login *log;
    reg *sing;
};
#endif // MAINWINDOW_H
