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
#include"reservation.h"
#include"sql.h"
#include"notification.h"
Conge::Conge(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Conge)
{
    ui->setupUi(this);
    afficher_conge (ui->affiherconge);
}

Conge::~Conge()
{
    delete ui;
}

void Conge::setnump(int n)
{
    this->nump=n;

}
void Conge::setetat(int e)
{
   this->etat=e;
}

int  Conge::getnump()
{

    return  this->nump;
}


int  Conge::getetat()
{
    return   this->etat;
}


void Conge::afficher_conge(QTableWidget *t)
 {
        QSqlQuery qry;
        int i;
        int j=0;
        qry.exec("select * from Conge");
        while(qry.next()){
            j++;
        }
        t->setRowCount(j);
        t->setColumnCount(2);
        t->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        t->setHorizontalHeaderLabels(QString("nump;etat").split(";"));
        i=1;
        qry.exec("select* from  Conge");
        while(qry.next())
        {
                   t->setItem(i-1,0,new QTableWidgetItem(qry.value(0).toString()));
                   t->setItem(i-1,1,new QTableWidgetItem(qry.value(1).toString()));

        i++;
        }}




 void Conge::supprimer_conge()
 {
        int i=ui->affiherconge->currentRow();
         QString id=ui->affiherconge->item(i,0)->text();

         qry.prepare("Delete from Conge  where nump=(?)");
         qry.addBindValue(nump);
         qry.exec();
         ui->affiherconge->removeRow(i);
         QMessageBox msg;
         msg.setText("Suppression effectué");
         msg.exec();

 }






 void  Conge::ajouter_conge(int nump,int etat)
 {
        qry.prepare("INSERT INTO Conge (nump,etat)"
                     "VALUES(?,?)");
         qry.addBindValue(nump);
         qry.addBindValue(etat);
         qry.exec();
         QMessageBox msgBox;
         msgBox.setText("Place 'a ete ajoute.");
         msgBox.exec();

         afficher_conge(ui->affiherconge);

}


   void Conge::modifier_conge(int nump, int etat)
  {

              QSqlQuery qry;
              qry.prepare("UPDATE CONGE  set etat=(?) where nump=(?) ");
              qry.addBindValue(nump);
              qry.addBindValue(etat);

              qDebug() << qry.exec();
              QMessageBox msg;
              msg.setText("Modification effectué");
              msg.exec();
              ui->affiherconge->clearContents();
              afficher_conge(ui->affiherconge);

  }


   void Conge::rechercher_numero()
  {
      QSqlQueryModel *modal=new QSqlQueryModel();
      QSqlQuery qry;
     int  nump=ui->line_nump->text().toInt();
      qry.prepare("select *from CONGE  where nump=:nump");
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


  void Conge::trie_nump()
  { while(ui->affiherconge->rowCount()>0)
      ui->affiherconge->removeRow(0);
      qry.exec("select * from CONGE order by nump   "
               " ");
          int c = -1;
          while (qry.next())
          {

              c++;
              ui->affiherconge->insertRow(c);
              for (int j=0; j<2; j++)
              {
                  QTableWidgetItem *item1 = new QTableWidgetItem(QString(qry.value(j).toString()));
                  this->ui->affiherconge->setItem(c,j,item1);

               }
            }
        }



  void Conge::rechercher_nump()
  {
      QSqlQueryModel *modal=new QSqlQueryModel();
      QSqlQuery qry;
     int  nump=ui->line_nump->text().toInt();
      qry.prepare("select *from CONGE  where nump=:nump");
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



  void Conge::rechercher_etat()
  {
      QSqlQueryModel *modal=new QSqlQueryModel();
      QSqlQuery qry;
     int  etat=ui->line_etat->text().toInt();
      qry.prepare("select *from ETAT  where etat=:etat");
      qry.bindValue(":etat",etat);
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




void Conge::on_Ajouter_clicked()
{  notification n ;
    Dialog *d=new Dialog();
    d->playmusic();
    int  nump=ui->line_nump->text().toInt();
     int  etat=ui->line_etat->text().toInt();
     if(etat!=0 && etat!=1)
         QMessageBox::warning(this,"error","invalid etat");
     else
    ajouter_conge(nump,etat);
     n.notification_ajout(nump);
    afficher_conge(ui->affiherconge);
}

void Conge::on_pushButton_2_clicked()
{
    Dialog *d=new Dialog();
    d->playmusic();
   supprimer_conge();
}


void Conge::on_pushButton_4_clicked()
{
    Dialog *d=new Dialog();
    d->playmusic();
   trie_nump();
}

void Conge::on_pushButton_6_clicked()
{

    Dialog *d=new Dialog();
    d->playmusic();
    rechercher_nump() ;
}

void Conge::on_pushButton_8_clicked()
{
    Dialog *d=new Dialog();
    d->playmusic();
   rechercher_etat();
}

void Conge::on_pushButton_clicked()
{
  Dialog *d= new Dialog();

  d->playmusic();

  afficher_conge(ui->affiherconge);

}


void Conge::on_pushButton_5_clicked()
{
       Dialog *d=new Dialog();
        d->playmusic();
        this->hide();
         Reservation  *r=new Reservation;
            r->show();

}

/*void Conge::on_pushButton_clicked()
{
    Dialog *d=new Dialog();
    d->playmusic();
   modifier_conge(ui->line_nump->text().toInt(),ui->line_etat->text().toInt());
}*/
