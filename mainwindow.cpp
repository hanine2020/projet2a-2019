#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bib.h"
#include "dialog.h"
#include"arduino.h"
#include "ui_personnels.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   //int ret =A.connect_arduino();
  /*  switch (ret) {

       case(0):qDebug()<<" arduino is available and connected to " <<A.getarduino_port_name();
        break ;
    case(1):qDebug()<<" arduino is available but not connected to " <<A.getarduino_port_name();
     break ;
    case(-1):qDebug()<<" arduino is  not available   ";
     break ;
  }*/

   // QObject::connect(A.getserial(),SIGNAL(readyRead()) ,this,SLOT(update_label())) ;

}
/*
void MainWindow::update_label()
{

    data=A.read_from_arduino();
    if(data=="1")
        //  ui->label_3->setText("ON");
    //   else  if ( data=="0")

   // ui->label_3->setText("OFF");


}
*/
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::connexion(QString id, QString passe)
{
    QMessageBox msg;
    QSqlDatabase bd = QSqlDatabase::addDatabase("QODBC");
    bd.setDatabaseName("Source_Projet2A");
    bd.setUserName(id);
    bd.setPassword(passe);

    if(!bd.open())
    {
        qDebug() <<"bug!!!";
        msg.setText("Erreur ID/Mot de passe !");
        msg.exec();
    }
    else
    {
        p=new Personnels(this);
        p->show();

       
        qDebug() <<"done!";
    }
}

void MainWindow::on_pushButton_clicked()
{
    Dialog *d=new Dialog();
    d->playmusic();
    connexion(ui->id->text(),ui->pass->text());
}

