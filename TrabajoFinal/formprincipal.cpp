#include "formprincipal.h"
#include "ui_formprincipal.h"
#include "formperfil.h"
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
FormPrincipal::FormPrincipal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormPrincipal)
{
    ui->setupUi(this);
    lec = new lector();
    QGridLayout * lay = new QGridLayout(this);
    QGroupBox *pub[lec->getSize()];
    for (int i=0;i<lec->getSize() ;++i ) {
        pub[i]=new QGroupBox();
        QVBoxLayout *vbox = new QVBoxLayout;

        QLabel *conten= new QLabel;
        QLabel *content2= new QLabel;
        QLabel *persona = new QLabel;

        conten->setText(QString::fromStdString(lec->getPublicacion(i).getContent()));
        content2->setText("#"+QString::fromStdString(lec->getPublicacion(i).getContent2()));
       // persona->setText(QString::fromStdString(lec->getPublicacion(i).getContent()));
        vbox->addWidget(conten);
        vbox->addWidget(content2);

        //QHBoxLayout* inter = new QHBoxLayout;

        QPushButton *BLike = new QPushButton("Like");
        QPushButton *BComment = new QPushButton("Comment");

        vbox->addWidget(BLike);
        vbox->addWidget(BComment);

        pub[i]->setLayout(vbox);


        QFrame *line= new QFrame();
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line->setStyleSheet("background:black");
        lay->addWidget(pub[i]);

        lay->addWidget(line);

    }

    ui->scrollAreaWidgetContents_3->setLayout(lay);





}

FormPrincipal::~FormPrincipal()
{
    delete ui;
}

void FormPrincipal::on_ButtonPerfil_clicked()
{
    FormPerfil *perfil=new FormPerfil(nullptr,ui->lineID->text());
    perfil->show();
}
