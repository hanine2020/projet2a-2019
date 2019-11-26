#include "reservation.h"
#include "ui_reservation.h"
#include"ui_conge.h"
#include"ui_mainwindow.h"
#include"ui_conge.h"
#include<QString>
#include<QDebug>
#include<QTableWidget>
#include"conge.h"
#include"QMediaPlayer"
#include"bib.h"
#include"dialog.h"
#include"conge.h"
#include"connexion.h"
#include"sql.h"
#include"QTime"
#include<QDebug>
#include"notification.h"

Reservation::Reservation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reservation)
{
    ui->setupUi(this);
    afficher_reservation(ui->tab_res);
    afficher_reservation_vide(ui->tab) ;

}

Reservation::~Reservation()
{
    delete ui;
}

void Reservation::setnump(int n)
{

    this->nump=n;
}
void Reservation::setheure(int h)
{
 this->heure=h;
}
int  Reservation::getnump()
{
    return   this->nump;
}
int Reservation::getheure()
{
    return  this->heure;

}



void Reservation::afficher_reservation_vide(QTableWidget *t)
{

        QSqlQuery qry;
        int i;
        int j=0;
        qry.exec("select * from CONGE  where etat=0 ");
        while(qry.next()){
            j++;
        }
        t->setRowCount(j);
        t->setColumnCount(2);
        t->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        t->setHorizontalHeaderLabels(QString("nump;etat").split(";"));
        i=1;
        qry.exec("select* from CONGE   where etat=0  ");
        while(qry.next())
        {
                   t->setItem(i-1,0,new QTableWidgetItem(qry.value(0).toString()));
                   t->setItem(i-1,1,new QTableWidgetItem(qry.value(1).toString()));

        i++;
        }
}


void Reservation::afficher_reservation(QTableWidget *t)
{

    QSqlQuery qry;
        int i;
        int j=0;
        qry.exec("select * from Reservation ");
        while(qry.next()){
            j++;
        }
        t->setRowCount(j);
        t->setColumnCount(2);
        t->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        t->setHorizontalHeaderLabels(QString("nump;heure").split(";"));
        i=1;
        qry.exec("select* from Reservation ");
        while(qry.next())
        {
                   t->setItem(i-1,0,new QTableWidgetItem(qry.value(0).toString()));
                   t->setItem(i-1,1,new QTableWidgetItem(qry.value(1).toString()));

        i++;
        }

}



void Reservation::ajouter_reservation(int nump,int heure)
{
     qry.prepare("INSERT INTO  Reservation (nump,heure)"
                 "VALUES(?,?)");
     qry.addBindValue(nump);
     qry.addBindValue(heure);


    qry.exec();
     QMessageBox msgBox;
     msgBox.setText("Reservation ' a ete ajoute.");
     msgBox.exec();

    afficher_reservation(ui->tab_res);
}




void Reservation::modifier_reservation(int heure , int nump)
{      QSqlQuery qry;
       qry.prepare("UPDATE Reservation  set heure=(?) where nump=(?) ");
       qry.addBindValue(nump);
       qry.addBindValue(heure);

       qDebug() << qry.exec();
       QMessageBox msg;
       msg.setText("Modification effectué");
       msg.exec();
       ui->tab_res->clearContents();
        afficher_reservation(ui->tab_res);


}

void Reservation::supprimer_reservation()
{

    int i=ui->tab_res->currentRow();
      QString id=ui->tab_res->item(i,0)->text();

      qry.prepare("Delete from Reservation  where nump=(?)");
      qry.addBindValue(nump);
      qry.exec();
      ui->tab_res->removeRow(i);
      QMessageBox msg;
      msg.setText("Suppression effectué");
      msg.exec();

}


void Reservation::rechercher_numero()
{
    QSqlQueryModel *modal=new QSqlQueryModel();
    QSqlQuery qry;
   int  nump=ui->line_nump->text().toInt();
    qry.prepare("select *from Reservation  where nump=:nump");
    qry.bindValue(":nump",nump);
    if(qry.exec())
    {
        modal->setQuery(qry);
      ui->tableView->setModel(modal);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("critical error"),
        QObject::tr("ERROR            "
                    "VERIFIER VOTRE PARAMETRE !!."), QMessageBox::Cancel);
    }

}


void Reservation::rechercher_heure()
{

    QSqlQueryModel *modal=new QSqlQueryModel();
    QSqlQuery qry;
   int  heure=ui->line_heure->text().toInt();
    qry.prepare("select *from Reservation  where heure=:heure");
    qry.bindValue(":heure",heure);
    if(qry.exec())
    {
        modal->setQuery(qry);
        ui->tableView->setModel(modal);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("critical error"),
        QObject::tr("ERROR            "
                    "VERIFIER VOTRE PARAMETRE !!."), QMessageBox::Cancel);
    }


}




 void Reservation::trie_nump()
 {

     while(ui->tab_res->rowCount()>0)
           ui->tab_res->removeRow(0);
           qry.exec("select * from Reservation order by nump   "
                    " ");
               int c = -1;
               while (qry.next())
               {

                   c++;
                   ui->tab_res->insertRow(c);
                   for (int j=0; j<2; j++)
                   {
                       QTableWidgetItem *item1 = new QTableWidgetItem(QString(qry.value(j).toString()));
                       this->ui->tab_res->setItem(c,j,item1);

                    }
                 }


 }



 void Reservation::on_pushButton_clicked()
 {  //Reservation  r ;
     Dialog *d=new Dialog();
     d->playmusic();
     notification  n ;

    // QSqlQueryModel *modal=new QSqlQueryModel();
     QSqlQuery qry;


      int  nump=ui->line_nump->text().toInt();
      int  heure=ui->line_heure->text().toInt();
      if(heure!=1 &&heure!=2 && heure!=3 &&heure!=4)
          QMessageBox::warning(this,"error","invalid");
      else
      {
         qry.prepare("UPDATE PLACE  set etat=1  where nump=nump");
          qry.addBindValue(1);
           qry.exec();
       //    p.setetat(1) ;
           ajouter_reservation(nump,heure);
        n.notification_ajout_res(nump);
           QTime start = QTime::currentTime();
        // query.(start);
           start.addSecs(3600*heure);
         // query(tempsreserv)

          // QTime finish = QTime::currentTime();
         //  time = start.msecsTo(finish) / 1000.0;
}
}



void Reservation::on_pushButton_3_clicked()
{
    Dialog *d=new Dialog();
        d->playmusic();
  modifier_reservation(ui->line_nump->text().toInt(),ui->line_heure->text().toInt()) ;
}

void Reservation::on_pushButton_4_clicked()
{
    Dialog *d=new Dialog();
        d->playmusic();
   supprimer_reservation();
}

void Reservation::on_pushButton_5_clicked()
{
   Dialog *d=new Dialog();
   d->playmusic();
   rechercher_numero();
}

void Reservation::on_pushButton_2_clicked()
{
   Dialog *d=new Dialog();
   d->playmusic();
   trie_nump();
}


void Reservation::on_pushButton_6_clicked()
{
 rechercher_heure();
}
