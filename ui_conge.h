/********************************************************************************
** Form generated from reading UI file 'place.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLACE_H
#define UI_PLACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Conge
{
public:
    QTableWidget *affiherconge;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *line_nump;
    QLineEdit *line_etat;
    QLabel *label;
    QLabel *label_2;
    QTableView *tableView;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Ajouter;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton;

    void setupUi(QWidget *Place)
    {
        if (Place->objectName().isEmpty())
            Place->setObjectName(QStringLiteral("Place"));
        Place->resize(810, 482);
        affiherconge = new QTableWidget(Place);
        affiherconge->setObjectName(QStringLiteral("affiherconge"));
        affiherconge->setGeometry(QRect(10, 70, 391, 121));
        verticalLayoutWidget = new QWidget(Place);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(530, 60, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        line_nump = new QLineEdit(verticalLayoutWidget);
        line_nump->setObjectName(QStringLiteral("line_nump"));

        verticalLayout->addWidget(line_nump);

        line_etat = new QLineEdit(verticalLayoutWidget);
        line_etat->setObjectName(QStringLiteral("line_etat"));

        verticalLayout->addWidget(line_etat);

        label = new QLabel(Place);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(436, 72, 91, 21));
        label_2 = new QLabel(Place);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(460, 110, 51, 20));
        tableView = new QTableView(Place);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(280, 220, 311, 121));
        verticalLayoutWidget_2 = new QWidget(Place);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(30, 230, 237, 112));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(verticalLayoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
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

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_8 = new QPushButton(verticalLayoutWidget_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setStyleSheet(QLatin1String("#pushButton_8{\n"
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
"#pushButton_8:hov"
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

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_5 = new QPushButton(Place);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(670, 10, 75, 23));
        horizontalLayoutWidget = new QWidget(Place);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 391, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Ajouter = new QPushButton(horizontalLayoutWidget);
        Ajouter->setObjectName(QStringLiteral("Ajouter"));
        Ajouter->setStyleSheet(QLatin1String("#Ajouter{\n"
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
"#Ajouter:hover{\n"
"ba"
                        "ckground:-webkit-gradient(linear, left top, left bottom, color-stop(0.05, #72b352), color-stop(1, #77b55a));\n"
"	background:-moz-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-webkit-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-o-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-ms-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:linear-gradient(to bottom, #72b352 5%, #77b55a 100%);\n"
"	\n"
"	background-color:blue;\n"
"}"));

        horizontalLayout->addWidget(Ajouter);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
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

        horizontalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(horizontalLayoutWidget);
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

        horizontalLayout->addWidget(pushButton_4);

        pushButton = new QPushButton(horizontalLayoutWidget);
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

        horizontalLayout->addWidget(pushButton);

        QWidget::setTabOrder(Ajouter, affiherconge);
        QWidget::setTabOrder(affiherconge, pushButton_4);
        QWidget::setTabOrder(pushButton_4, tableView);
        QWidget::setTabOrder(tableView, line_nump);
        QWidget::setTabOrder(line_nump, line_etat);
        QWidget::setTabOrder(line_etat, pushButton_8);

        retranslateUi(Place);

        QMetaObject::connectSlotsByName(Place);
    } // setupUi

    void retranslateUi(QWidget *Place)
    {
        Place->setWindowTitle(QApplication::translate("Place", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Place", "numero de place", Q_NULLPTR));
        label_2->setText(QApplication::translate("Place", "etat", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Place", "Recherche par numero de place ", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Place", "Recherche par etat", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Place", "PushButton", Q_NULLPTR));
        Ajouter->setText(QApplication::translate("Place", "Ajouter", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Place", "Supprimer", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Place", "Affichage trier", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Place", "Modifier", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Conge: public Ui_Conge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLACE_H
