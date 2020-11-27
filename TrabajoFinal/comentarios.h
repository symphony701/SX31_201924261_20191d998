#ifndef COMENTARIOS_H
#define COMENTARIOS_H

#include <QWidget>
#include "lectorComentarios.h"

namespace Ui {
class Comentarios;
}

class Comentarios : public QWidget
{
    Q_OBJECT

public:
    explicit Comentarios(QWidget *parent = nullptr, int IdPub=0);
    ~Comentarios();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Comentarios *ui;
    lectorCom *lec;
    int aidi;
};

#endif // COMENTARIOS_H
