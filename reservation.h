#ifndef RESERVATION_H
#define RESERVATION_H
#include <QWidget>
#include <QDialog>
#include<QTableWidget>
#include"sql.h"
namespace Ui {
class Reservation;
}

class Reservation : public QDialog
{
    int nump  ;
    int heure ;

    Q_OBJECT

public:
     QSqlQuery qry ;
    explicit Reservation(QWidget *parent = nullptr);
    ~Reservation();
    void setnump(int n);
    void setheure(int h);
    int  getnump();
    int  getheure();
    void afficher_reservation_vide(QTableWidget *t);
    void afficher_reservation(QTableWidget *t) ;
    void supprimer_reservation();
    void ajouter_reservation(int nump,int heure);
    void modifier_reservation(int heure,  int nump);
    void rechercher_numero();
    void rechercher_heure();
    void trie_nump();
private slots:
  void on_pushButton_clicked();

  void on_pushButton_3_clicked();

  void on_pushButton_4_clicked();

  void on_pushButton_5_clicked();

  void on_pushButton_2_clicked();

  void on_pushButton_6_clicked();

private:
    Ui::Reservation *ui;
};

#endif // RESERVATION_H
