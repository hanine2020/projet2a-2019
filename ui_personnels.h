/********************************************************************************
** Form generated from reading UI file 'parking.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARKING_H
#define UI_PARKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_personnels
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *line_prenom;
    QLabel *label_4;
    QLineEdit *line_id;
    QLabel *label_5;
    QLineEdit *line_tel;
    QLineEdit *line_nom;
    QTableView *tableView;
    QPushButton *pushButton_9;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QWidget *Parking)
    {
        if (Parking->objectName().isEmpty())
            Parking->setObjectName(QStringLiteral("Parking"));
        Parking->resize(1250, 750);
        tableWidget = new QTableWidget(Parking);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(100, 120, 411, 151));
        label = new QLabel(Parking);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-180, -90, 3341, 761));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/im.jpg")));
        pushButton = new QPushButton(Parking);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 90, 101, 31));
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
        pushButton_2 = new QPushButton(Parking);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 90, 91, 31));
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
"##pushButton_2:ho"
                        "ver{\n"
"background:-webkit-gradient(linear, left top, left bottom, color-stop(0.05, #72b352), color-stop(1, #77b55a));\n"
"	background:-moz-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-webkit-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-o-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:-ms-linear-gradient(top, #72b352 5%, #77b55a 100%);\n"
"	background:linear-gradient(to bottom, #72b352 5%, #77b55a 100%);\n"
"	\n"
"	background-color:blue;\n"
"}"));
        pushButton_3 = new QPushButton(Parking);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 90, 101, 31));
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
        pushButton_4 = new QPushButton(Parking);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(410, 90, 111, 31));
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
        formLayoutWidget = new QWidget(Parking);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(550, 130, 181, 119));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        line_prenom = new QLineEdit(formLayoutWidget);
        line_prenom->setObjectName(QStringLiteral("line_prenom"));

        formLayout->setWidget(1, QFormLayout::FieldRole, line_prenom);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        line_id = new QLineEdit(formLayoutWidget);
        line_id->setObjectName(QStringLiteral("line_id"));

        formLayout->setWidget(2, QFormLayout::FieldRole, line_id);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        line_tel = new QLineEdit(formLayoutWidget);
        line_tel->setObjectName(QStringLiteral("line_tel"));

        formLayout->setWidget(3, QFormLayout::FieldRole, line_tel);

        line_nom = new QLineEdit(formLayoutWidget);
        line_nom->setObjectName(QStringLiteral("line_nom"));

        formLayout->setWidget(0, QFormLayout::FieldRole, line_nom);

        tableView = new QTableView(Parking);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(230, 310, 421, 91));
        pushButton_9 = new QPushButton(Parking);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(600, 30, 201, 41));
        pushButton_9->setStyleSheet(QLatin1String("#pushButton_9{\n"
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
"#pushButton_9:hov"
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
        verticalLayoutWidget = new QWidget(Parking);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 300, 171, 140));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
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

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
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

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setStyleSheet(QLatin1String("#pushButton_7{\n"
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
"#pushButton_7:hov"
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

        verticalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(verticalLayoutWidget);
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

        verticalLayout->addWidget(pushButton_8);

        label->raise();
        tableWidget->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        formLayoutWidget->raise();
        tableView->raise();
        pushButton_9->raise();
        verticalLayoutWidget->raise();

        retranslateUi(Parking);

        QMetaObject::connectSlotsByName(Parking);
    } // setupUi

    void retranslateUi(QWidget *Parking)
    {
        Parking->setWindowTitle(QApplication::translate("Parking", "Form", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Parking", "Id ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Parking", "Nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Parking", "Prenom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Parking", "Tel ", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Parking", "Ajouter", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Parking", "Supprimer", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Parking", "Modifier", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Parking", "Affichage trie", Q_NULLPTR));
        label_2->setText(QApplication::translate("Parking", "nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("Parking", "prenom", Q_NULLPTR));
        label_4->setText(QApplication::translate("Parking", "id", Q_NULLPTR));
        label_5->setText(QApplication::translate("Parking", "tel", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("Parking", "demander conge", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Parking", "chercher ID", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Parking", "cherche Nom ", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Parking", "recherche Prenom", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Parking", "recherche Tel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Personnels: public Ui_personnels {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARKING_H
