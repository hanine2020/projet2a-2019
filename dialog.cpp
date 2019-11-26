#include "dialog.h"
#include "ui_dialog.h"
#include"conge.h"
#include"reservation.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

/*
void Dialog::connexion(QString id, QString passe)
{
    QMessageBox msg;
    QSqlDatabase bd = QSqlDatabase::addDatabase("QODBC");
    bd.setDatabaseName("Source_Projet2A");
    bd.setUserName(System);
    bd.setPassword(27457299);
    if(!bd.open())
    {
        qDebug() <<"bug!!!";
        msg.setText("Erreur ID/Mot de passe !");
        msg.exec();
    }
    else
    {
        p=new Place(this);
        p->show();


        qDebug() <<"done!";
    }
}

void Place::on_pushButton_clicked()
{
        connexion(ui->id->text(),ui->pass->text());
}
*/
void Dialog::playmusic()
{
    musicC=new QMediaPlayer();
         musicC->setMedia(QUrl("qrc:/Sound/Click.mp3"));
       musicC->setVolume(200);
       musicC->play();
}
