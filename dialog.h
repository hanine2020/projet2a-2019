#ifndef DIALOG_H
#define DIALOG_H
//#include "conge.h"
#include <QDialog>
#include "bib.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
     void connexion(QString,QString);
    ~Dialog();
     void playmusic();




private slots:
  //  void on_pushButton_clicked();

    //void on_tabWidget_tabBarClicked(int index);

private:
    Ui::Dialog *ui;
    QMediaPlayer *musicC=new QMediaPlayer();
};

#endif // DIALOG_H
