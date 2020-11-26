#ifndef FORMREGISTER_H
#define FORMREGISTER_H

#include <QWidget>

namespace Ui {
class FormRegister;
}

class FormRegister : public QWidget
{
    Q_OBJECT

public:
    explicit FormRegister(QWidget *parent = nullptr);
    ~FormRegister();

private:
    Ui::FormRegister *ui;
};

#endif // FORMREGISTER_H
