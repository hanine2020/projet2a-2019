#ifndef CONGE_H
#define CONGE_H
#include <QWidget>
#include"sql.h"
#include "ui_mainwindow.h"


namespace Ui {
class Conge;
}

class Conge : public QWidget
{
    int nump ;
     int etat ;
    Q_OBJECT

public:
     QSqlQuery qry ;
    explicit Conge(QWidget *parent = nullptr);
     ~Conge();
       //  Conge();
        // Conge(int,int);

         void setnump(int n);
         void setetat(int e);
         int  getnump();
         int  getetat();
         void afficher_conge(QTableWidget *t);
         void supprimer_conge();
         void ajouter_conge(int nump,int etat);
         void modifier_conge(int nump ,int etat) ;
         void rechercher_numero();
         void trie_nump();
         void rechercher_nump();
          void rechercher_etat();


private slots:


         void on_Ajouter_clicked();

         void on_pushButton_2_clicked();



         void on_pushButton_4_clicked();

         void on_pushButton_6_clicked();

         void on_pushButton_8_clicked();

         void on_pushButton_clicked();
       void on_tableWidget_cellActivated(int row, int column);

         void on_pushButton_5_clicked();

      //   void on_pushButton_clicked();

private:
    Ui::Conge *ui;
};

#endif // CONGE_H
