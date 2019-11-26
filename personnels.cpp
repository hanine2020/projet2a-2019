#include "personnels.h"
#include "ui_personnels.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QDebug>
#include <QTableWidget>
#include"QMediaPlayer"
#include "bib.h"
#include "dialog.h"
#include"connexion.h"
#include"conge.h"
#include"notification.h"
#include "string"
Personnels::Personnels(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Personnels)
{
    ui->setupUi(this);
    afficher_personnels();
    QStringList CompletionList;
    CompletionList << "hanine";
   // CompletionList << "djebbi";
    StringCompleter = new QCompleter(CompletionList, this);
    StringCompleter->setCaseSensitivity(Qt::CaseInsensitive);
    ui->line_nom->setCompleter(StringCompleter);
     QStringList   L;
          L << "djebbi";
         StringCompleter = new QCompleter(L, this);
         StringCompleter->setCaseSensitivity(Qt::CaseInsensitive);
         ui->line_prenom->setCompleter(StringCompleter);

}

Personnels::~Personnels()
{
    delete ui;
}

void Personnels::setnom(QString n)
{
   this->nom=n ;

}
void Personnels::setprenom(QString p)
{

    this->prenom=p ;
}
void Personnels::settel(int t )
{

    this->tel=t;
}
void Personnels::setcin(int c)
{
    this->cin_per=c ;
}
 QString Personnels::getnom()
{
     return   this->nom ;
 }
 QString Personnels::getprenom()
 {

     return  this->prenom;
 }
 int Personnels::gettel()
 {
     return  this->tel;

 }
 int Personnels::getcin()
 {
     return this->cin_per;
 }



void Personnels::afficher_personnels()
{
 while(ui->tableWidget->rowCount()>0)
    ui->tableWidget->removeRow(0);
    qry.exec("select * from Personnels ");
        int c = -1;
        while (qry.next())
        {

            c++;
            ui->tableWidget->insertRow(c);
            for (int j=0; j<4; j++)
            {
                QTableWidgetItem *item1 = new QTableWidgetItem(QString(qry.value(j).toString()));
                this->ui->tableWidget->setItem(c,j,item1);

             }}}




void Personnels::supprimer_personnels()
{
  int cin_per =ui->tableWidget->currentRow();
  QString i=QString::number(cin_per);
        i =ui->tableWidget->item(cin_per,0)->text();
         // QString prenom =ui->tableWidget->item(id,0)->text();
//QString res = QString:: number(int i)
 //  if( int cin_per =  id )
    qry.prepare("Delete from Personnels  where cin_per=(?)");
        qry.addBindValue(i);
        qry.exec();
        ui->tableWidget->removeRow(cin_per);
        QMessageBox msg;
        msg.setText("Suppression effectué");
        msg.exec();

}


 void Personnels::ajouter_personnels(int tel, QString prenom, QString nom, int cin_per)
 {
         qry.prepare("INSERT INTO Personnels  (tel,prenom,nom,cin_per)"
                    "VALUES(?,?,?,?)");
         qry.addBindValue(tel);
         qry.addBindValue(prenom);
         qry.addBindValue(nom);
         qry.addBindValue(cin_per);

        qry.exec();
        QMessageBox msgBox;
        msgBox.setText("Personnels 'a ete ajoute.");
        msgBox.exec();
        afficher_personnels();

     }



void Personnels::modifier_personnels(int tel, QString prenom, QString nom, int cin_per)
{

    qry.prepare("UPDATE Personnels  set nom=(?), prenom=(?),tel=(?) where cin_per=(?)");
    qry.addBindValue(nom);
     qry.addBindValue(prenom);
     qry.addBindValue(tel);
     qry.addBindValue(cin_per);
     qry.exec() ;
    afficher_personnels();
}




/*void Parking::on_tableWidget_itemClicked(QTableWidgetItem *item)
{

}

*/

void Personnels::rechercher_cin()
{
    QSqlQueryModel *modal=new QSqlQueryModel();
    QSqlQuery qry;
   int cin_per =ui->line_id->text().toInt();
  // QString cin_per=ui->line_id->text();
    qry.prepare("select *from Personnels  where cin_per=:cin_per");
    qry.bindValue(":cin_per",cin_per);
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


void Personnels::rechercher_TEL()
{
    QSqlQueryModel *modal=new QSqlQueryModel();
    QSqlQuery qry;
   int tel=ui->line_tel->text().toInt();
    qry.prepare("select *from Personnels  where tel=:tel");
    qry.bindValue(":tel",tel);
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




void Personnels::rechercher_Nom()
{

        QSqlQueryModel *modal=new QSqlQueryModel();
        QSqlQuery qry;
        QString nom=ui->line_nom->text();
        qry.prepare("select *from Personnels where nom=:nom");
        qry.bindValue(":nom",nom);
        if(qry.exec())
        {
            modal->setQuery(qry);
            ui->tableView->setModel(modal);
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("critical error"),
            QObject::tr(" ERROR"

                        "\nVERIFIER VOTRE PARAMETRE !!."), QMessageBox::Cancel);
        }
    }





void Personnels::rechercher_Prenom()
{
     QSqlQueryModel *modal=new QSqlQueryModel();
    QSqlQuery qry;
    QString prenom=ui->line_prenom->text();
    qry.prepare("select * from Personnels where prenom=:prenom");
    qry.bindValue(":prenom",prenom);
    if(qry.exec())
    {
        modal->setQuery(qry);
        ui->tableView->setModel(modal);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("critical error"),
        QObject::tr(" ERROR"

                    "\nVERIFIER VOTRE PARAMETRE !!."), QMessageBox::Cancel);
    }

}





void Personnels::trie_id()
{ while(ui->tableWidget->rowCount()>0)
    ui->tableWidget->removeRow(0);
    qry.exec("select * from Personnels order by cin_per  DESC ");
        int c = -1;
        while (qry.next())
        {

            c++;
            ui->tableWidget->insertRow(c);
            for (int j=0; j<4; j++)
            {
                QTableWidgetItem *item1 = new QTableWidgetItem(QString(qry.value(j).toString()));
                this->ui->tableWidget->setItem(c,j,item1);

             }
          }
      }



void Personnels::on_pushButton_clicked()
{   notification n ;
    Dialog *d=new Dialog();
    d->playmusic();

  QString nom=ui->line_nom->text();
  QString prenom=ui->line_prenom->text();
  int  cin_per=ui->line_id->text().toInt();
  //QString cin_per=ui->line_id->text();
  int  tel=ui->line_tel->text().toInt();
 ajouter_personnels(tel,prenom,nom,cin_per);
 n.notification_ajout_clt(cin_per);
}

void Personnels::on_pushButton_2_clicked()
{
    Dialog *d=new Dialog();
    d->playmusic();
supprimer_personnels();
}

void Personnels::on_pushButton_3_clicked()
{
    Dialog *d=new Dialog();
    d->playmusic();
   modifier_personnels(ui->line_tel->text().toInt(),ui->line_prenom->text(),ui->line_nom->text(),ui->line_id->text().toInt());
}

void Personnels::on_pushButton_4_clicked()
{
    Dialog *d=new Dialog();
    d->playmusic();
   trie_id();
}


void Personnels::on_pushButton_5_clicked()
{
    Dialog *d=new Dialog();
    d->playmusic();
   rechercher_cin();

}

void Personnels::on_pushButton_8_clicked()
{
    Dialog *d=new Dialog();
    d->playmusic();
   rechercher_TEL();
}

void Personnels::on_pushButton_6_clicked()
{
    Dialog *d=new Dialog();
    d->playmusic();
   rechercher_Nom();
}

void Personnels::on_pushButton_7_clicked()
{
    Dialog *d=new Dialog();
    d->playmusic();
  rechercher_Prenom();
}



void Personnels::on_pushButton_9_clicked()
{ Dialog *d=new Dialog();
    d->playmusic();
    this->hide();
     Conge *pa=new Conge;
        pa->show();

}



