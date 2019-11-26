#include "mainwindow.h"
#include <QApplication>
#include "sql.h"
#include"connexion.h"
#include"personnels.h"
#include"conge.h"
#include "sonbackground.h"
#include"connexion.h"
#include<QMessageBox>
int main(int argc, char *argv[])
{


    QApplication a(argc, argv);

    MainWindow w;
    Connexion  c ;
    mettreMusique();
     // bool test =c.ouvrirConnexion();
    //if(test)
   {
         w.show();
                //  pa= new Place(this);
               //pa->show();
              // QMessageBox::Critical(nullptr , QObject::tr("da"))

    }


    return a.exec();
}
