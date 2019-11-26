#ifndef PERSONNELS_H
#define PERSONNELS_H
#include <QCompleter>
#include <QDirModel>
#include <QWidget>
#include"sql.h"
#include "ui_mainwindow.h"
#include "ui_personnels.h"
namespace Ui {
class Personnels;
}

class Personnels : public QWidget
{
    int tel ;
    QString prenom ;
    QString  nom   ;
    int cin_per  ;
    Q_OBJECT

public:
    QSqlQuery qry ;
     explicit Personnels(QWidget *parent = nullptr);
     ~Personnels();
//    Personnels();
  //  personnels(int,QString,QString,int);
    void afficher_personnels ();
    void supprimer_personnels();
    void ajouter_personnels(int tel,  QString prenom ,QString  nom,int cin_per);
    void modifier_personnels(int tel,  QString prenom ,QString  nom,int cin_per);
     void setnom(QString n);
     void setprenom( QString p );
     void settel(int t );
     void setcin(int c );
      QString getnom();
       QString getprenom();
       int  gettel();
       int  getcin();

     void rechercher_cin();
     void rechercher_TEL() ;
     void rechercher_Nom();
     void rechercher_Prenom();
     void trie_id();
     void music();
//QSqlQueryModel * rechercher(const QString &Nom) ;

private slots:
      void on_pushButton_clicked();

      void on_pushButton_2_clicked();

      void on_pushButton_3_clicked();

      void on_pushButton_4_clicked();

    // void on_tableWidget_itemClicked(QTableWidgetItem *item);

      void on_pushButton_5_clicked();

      void on_pushButton_8_clicked();

      void on_pushButton_6_clicked();

      void on_pushButton_7_clicked();



     //void on_comboBox_activated(const QString &arg1);

     void on_pushButton_9_clicked();





private:
         Ui::Personnels *ui;
    QCompleter *StringCompleter;
    QCompleter *ModelCompleter;
};

#endif // PERSONNELS_H
