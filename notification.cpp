#include "notification.h"
#include <QSystemTrayIcon>
notification::notification()
{

}

void notification::notification_ajout(int nump)
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    notifyIcon->show();
    notifyIcon->setIcon(QIcon(""));
    notifyIcon->showMessage("Ajout Place ","Une  Nouvelle  Place de  N° nump  a été ajoutée",QSystemTrayIcon::Information,15000);

}

void notification::notification_ajout_clt(int c )
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    notifyIcon->show();
    notifyIcon->setIcon(QIcon(""));
    notifyIcon->showMessage("Ajout personnel ","Un  nouveau  personnel de  N° cin_per  a été ajoutée",QSystemTrayIcon::Information,15000);

}



void notification::notification_ajout_res(int nump)
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    notifyIcon->show();
    notifyIcon->setIcon(QIcon(""));
    notifyIcon->showMessage("Ajout reservation ","Un  nouvelle  reservation de  N° nump a été ajoutée",QSystemTrayIcon::Information,15000);

}












