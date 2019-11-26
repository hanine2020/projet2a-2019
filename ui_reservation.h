/********************************************************************************
** Form generated from reading UI file 'reservation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVATION_H
#define UI_RESERVATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reservation
{
public:
    QTableWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tab_res;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *line_nump;
    QLineEdit *line_heure;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QLabel *label_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Reservation)
    {
        if (Reservation->objectName().isEmpty())
            Reservation->setObjectName(QStringLiteral("Reservation"));
        Reservation->resize(800, 533);
        tab = new QTableWidget(Reservation);
        tab->setObjectName(QStringLiteral("tab"));
        tab->setGeometry(QRect(0, 40, 251, 151));
        label = new QLabel(Reservation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 350, 81, 21));
        label_2 = new QLabel(Reservation);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 390, 61, 20));
        tab_res = new QTableWidget(Reservation);
        tab_res->setObjectName(QStringLiteral("tab_res"));
        tab_res->setGeometry(QRect(530, 30, 241, 161));
        verticalLayoutWidget = new QWidget(Reservation);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 340, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        line_nump = new QLineEdit(verticalLayoutWidget);
        line_nump->setObjectName(QStringLiteral("line_nump"));

        verticalLayout->addWidget(line_nump);

        line_heure = new QLineEdit(verticalLayoutWidget);
        line_heure->setObjectName(QStringLiteral("line_heure"));

        verticalLayout->addWidget(line_heure);

        verticalLayoutWidget_2 = new QWidget(Reservation);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(310, 50, 203, 140));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("#pushButton{\n"
"-moz-box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	-webkit-box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	background:-webkit-gradient(linear, left top, left bottom, color-stop(0.05, #77b55a), color-stop(1, #72b352));\n"
"	background:-moz-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-webkit-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-o-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-ms-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:linear-gradient(to bottom, #77b55a 5%, #72b352 100%);\n"
"	\n"
"	background-color:pink;\n"
"	-moz-border-radius:4px;\n"
"	-webkit-border-radius:4px;\n"
"	border-radius:4px;\n"
"	border:1px solid #4b8f29;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:13px;\n"
"	font-weight:bold;\n"
"	padding:6px 12px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #5b8a3c;\n"
"}\n"
"#pushButton:hover{\n"
""
                        "background:-webkit-gradient(linear, left top, left bottom, color-stop(0.05, #72b352), color-stop(1, #77b55a));\n"
"	background:-moz-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-webkit-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-o-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-ms-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:linear-gradient(to bottom, #72b352 5%, #77b55a 100%);\n"
"	\n"
"	background-color:blue;\n"
"}"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_4 = new QPushButton(verticalLayoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QLatin1String("#pushButton_4{\n"
"-moz-box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	-webkit-box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	background:-webkit-gradient(linear, left top, left bottom, color-stop(0.05, #77b55a), color-stop(1, #72b352));\n"
"	background:-moz-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-webkit-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-o-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-ms-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:linear-gradient(to bottom, #77b55a 5%, #72b352 100%);\n"
"	\n"
"	background-color:pink;\n"
"	-moz-border-radius:4px;\n"
"	-webkit-border-radius:4px;\n"
"	border-radius:4px;\n"
"	border:1px solid #4b8f29;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:13px;\n"
"	font-weight:bold;\n"
"	padding:6px 12px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #5b8a3c;\n"
"}\n"
"#pushButton_4:hov"
                        "er{\n"
"background:-webkit-gradient(linear, left top, left bottom, color-stop(0.05, #72b352), color-stop(1, #77b55a));\n"
"	background:-moz-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-webkit-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-o-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-ms-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:linear-gradient(to bottom, #72b352 5%, #77b55a 100%);\n"
"	\n"
"	background-color:blue;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(verticalLayoutWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QLatin1String("#pushButton_3{\n"
"-moz-box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	-webkit-box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	background:-webkit-gradient(linear, left top, left bottom, color-stop(0.05, #77b55a), color-stop(1, #72b352));\n"
"	background:-moz-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-webkit-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-o-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-ms-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:linear-gradient(to bottom, #77b55a 5%, #72b352 100%);\n"
"	\n"
"	background-color:pink;\n"
"	-moz-border-radius:4px;\n"
"	-webkit-border-radius:4px;\n"
"	border-radius:4px;\n"
"	border:1px solid #4b8f29;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:13px;\n"
"	font-weight:bold;\n"
"	padding:6px 12px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #5b8a3c;\n"
"}\n"
"#pushButton_3:hov"
                        "er{\n"
"background:-webkit-gradient(linear, left top, left bottom, color-stop(0.05, #72b352), color-stop(1, #77b55a));\n"
"	background:-moz-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-webkit-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-o-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-ms-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:linear-gradient(to bottom, #72b352 5%, #77b55a 100%);\n"
"	\n"
"	background-color:blue;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("#pushButton_2{\n"
"-moz-box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	-webkit-box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	background:-webkit-gradient(linear, left top, left bottom, color-stop(0.05, #77b55a), color-stop(1, #72b352));\n"
"	background:-moz-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-webkit-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-o-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-ms-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:linear-gradient(to bottom, #77b55a 5%, #72b352 100%);\n"
"	\n"
"	background-color:pink;\n"
"	-moz-border-radius:4px;\n"
"	-webkit-border-radius:4px;\n"
"	border-radius:4px;\n"
"	border:1px solid #4b8f29;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:13px;\n"
"	font-weight:bold;\n"
"	padding:6px 12px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #5b8a3c;\n"
"}\n"
"#pushButton_2:hov"
                        "er{\n"
"background:-webkit-gradient(linear, left top, left bottom, color-stop(0.05, #72b352), color-stop(1, #77b55a));\n"
"	background:-moz-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-webkit-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-o-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-ms-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:linear-gradient(to bottom, #72b352 5%, #77b55a 100%);\n"
"	\n"
"	background-color:blue;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_2);

        tableView = new QTableView(Reservation);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(460, 290, 321, 181));
        label_3 = new QLabel(Reservation);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 10, 141, 20));
        pushButton_6 = new QPushButton(Reservation);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(500, 230, 261, 31));
        pushButton_6->setStyleSheet(QLatin1String("#pushButton_6{\n"
"-moz-box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	-webkit-box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	background:-webkit-gradient(linear, left top, left bottom, color-stop(0.05, #77b55a), color-stop(1, #72b352));\n"
"	background:-moz-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-webkit-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-o-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-ms-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:linear-gradient(to bottom, #77b55a 5%, #72b352 100%);\n"
"	\n"
"	background-color:pink;\n"
"	-moz-border-radius:4px;\n"
"	-webkit-border-radius:4px;\n"
"	border-radius:4px;\n"
"	border:1px solid #4b8f29;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:13px;\n"
"	font-weight:bold;\n"
"	padding:6px 12px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #5b8a3c;\n"
"}\n"
"#pushButton_6:hov"
                        "er{\n"
"background:-webkit-gradient(linear, left top, left bottom, color-stop(0.05, #72b352), color-stop(1, #77b55a));\n"
"	background:-moz-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-webkit-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-o-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-ms-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:linear-gradient(to bottom, #72b352 5%, #77b55a 100%);\n"
"	\n"
"	background-color:blue;\n"
"}"));
        pushButton_5 = new QPushButton(Reservation);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(500, 260, 261, 31));
        pushButton_5->setStyleSheet(QLatin1String("#pushButton_5{\n"
"-moz-box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	-webkit-box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	box-shadow: 0px 10px 14px -7px #3e7327;\n"
"	background:-webkit-gradient(linear, left top, left bottom, color-stop(0.05, #77b55a), color-stop(1, #72b352));\n"
"	background:-moz-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-webkit-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-o-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:-ms-linear-gradient(top, #77b55a 5%, #72b352 100%);\n"
"	background:linear-gradient(to bottom, #77b55a 5%, #72b352 100%);\n"
"	\n"
"	background-color:pink;\n"
"	-moz-border-radius:4px;\n"
"	-webkit-border-radius:4px;\n"
"	border-radius:4px;\n"
"	border:1px solid #4b8f29;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:13px;\n"
"	font-weight:bold;\n"
"	padding:6px 12px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #5b8a3c;\n"
"}\n"
"#pushButton_5:hov"
                        "er{\n"
"background:-webkit-gradient(linear, left top, left bottom, color-stop(0.05, #72b352), color-stop(1, #77b55a));\n"
"	background:-moz-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-webkit-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-o-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-ms-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:linear-gradient(to bottom, #72b352 5%, #77b55a 100%);\n"
"	\n"
"	background-color:blue;\n"
"}"));

        retranslateUi(Reservation);

        QMetaObject::connectSlotsByName(Reservation);
    } // setupUi

    void retranslateUi(QDialog *Reservation)
    {
        Reservation->setWindowTitle(QApplication::translate("Reservation", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Reservation", "numero de conge", Q_NULLPTR));
        label_2->setText(QApplication::translate("Reservation", "heure ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Reservation", "ajouter reservation", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Reservation", "supprimer votre reservation", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Reservation", "modifier votre reservation", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Reservation", "trier le tableau", Q_NULLPTR));
        label_3->setText(QApplication::translate("Reservation", "les  conges acceptés ", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Reservation", "Rechercher par heure", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Reservation", "Rechercher par numero de conge ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Reservation: public Ui_Reservation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATION_H
