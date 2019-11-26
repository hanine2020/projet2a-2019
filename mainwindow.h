#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"arduino.h"
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include "personnels.h"
#include "conge.h"
#include "dialog.h"
#include "ui_personnels.h"
//#include "ui_mainwindow.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void connexion(QString,QString);

    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    /***************************/
 //void update_label();
private:
    Ui::MainWindow *ui;
    Personnels *p;

    Conge *pa ;
    QByteArray data ;
    /******************************/
 Arduino A;
};

#endif // MAINWINDOW_H
