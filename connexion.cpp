#include "connexion.h"

Connexion::Connexion()
{

}
bool Connexion::ouvrirConnexion()
{
    bool test= false ;
      QSqlDatabase db =  QSqlDatabase::addDatabase("QODBC");
      db.setDatabaseName("Source_Projet2A");
      db.setUserName("System");
      db.setPassword("27457299");
      if(db.open())
      test=true ;
      return  test ;



}


void Connexion::fermerConnexion()
{
    db.close();
}
