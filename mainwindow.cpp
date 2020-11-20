#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent): QWidget(parent)
{
    QGroupBox *echoGroup = new QGroupBox(tr("Identifiant"));
    QGroupBox *echoGroup1 = new QGroupBox("Mot de passe");
    QGroupBox *echoGroup2 = new QGroupBox("Pavé Numérique");


    QLabel *Id = new QLabel("Identifiant : ");
    zone_de_texte = new QLineEdit;
    zone_de_texte->setPlaceholderText("Entrer ID");




    QGridLayout *echoLayout = new QGridLayout;
    echoLayout->addWidget(Id, 0, 0);
    echoLayout->addWidget(zone_de_texte, 0, 1);
    echoLayout->addWidget(checkbox, 1, 0);
    echoGroup->setLayout(echoLayout);

    QLabel *Mdp = new QLabel("Mot de passe : ");
    zone_de_texte1 = new QLineEdit;
    zone_de_texte1->setPlaceholderText("Entrer Mot de passe");



    QGridLayout *echoLayout1 = new QGridLayout;
    echoLayout1->addWidget(Mdp, 0, 0);
    echoLayout1->addWidget(zone_de_texte1,0,1);
    echoLayout1->addWidget(checkbox1);
    echoGroup1->setLayout(echoLayout1);

    QPushButton *Butt_connexion = new QPushButton("Connexion");

    QGridLayout *P_N = new QGridLayout;
    P_N->addWidget(b0,0,0);
    P_N->addWidget(b1,0,1);
    P_N->addWidget(b2,0,2);
    P_N->addWidget(b3,0,3);
    P_N->addWidget(b4,0,4);
    P_N->addWidget(b5,1,0);
    P_N->addWidget(b6,1,1);
    P_N->addWidget(b7,1,2);
    P_N->addWidget(b8,1,3);
    P_N->addWidget(b9,1,4);
    echoGroup2->setLayout(P_N);

    connect(b0,SIGNAL(clicked(bool)),this,SLOT(Clavier_num()));
    connect(b1,SIGNAL(clicked(bool)),this,SLOT(Clavier_num()));
    connect(b2,SIGNAL(clicked(bool)),this,SLOT(Clavier_num()));
    connect(b3,SIGNAL(clicked(bool)),this,SLOT(Clavier_num()));
    connect(b4,SIGNAL(clicked(bool)),this,SLOT(Clavier_num()));
    connect(b5,SIGNAL(clicked(bool)),this,SLOT(Clavier_num()));
    connect(b6,SIGNAL(clicked(bool)),this,SLOT(Clavier_num()));
    connect(b7,SIGNAL(clicked(bool)),this,SLOT(Clavier_num()));
    connect(b8,SIGNAL(clicked(bool)),this,SLOT(Clavier_num()));
    connect(b9,SIGNAL(clicked(bool)),this,SLOT(Clavier_num()));


    connect(checkbox,SIGNAL(stateChanged(int)),this,SLOT(Checkbox()));
    connect(checkbox1,SIGNAL(stateChanged(int)),this,SLOT(Checkbox1()));


    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(echoGroup);
    layout->addWidget(echoGroup1);
    layout->addWidget(Butt_connexion);
    layout->addWidget(echoGroup2);
    setLayout(layout);
zone_de_texte->setMaxLength(9);
zone_de_texte1->setMaxLength(4);

}

void MainWindow::Clavier_num()
{
    while (zone_de_texte->maxLength()!=9)
    {
        QPushButton * bouton = (QPushButton *)+sender();
        int val_bouton = (bouton->text()[0].digitValue());
        zone_de_texte->setText(zone_de_texte->text()+QString::number(val_bouton));

    if (zone_de_texte1->maxLength()!=4)
    {


        QPushButton * bouton = (QPushButton *)+sender();
        int val_bouton = (bouton->text()[0].digitValue());
        zone_de_texte1->setText(zone_de_texte1->text()+QString::number(val_bouton));
    }


    }
}





void MainWindow::Checkbox()
{
    if(checkbox->checkState()==0)
    {
        zone_de_texte->setEchoMode(QLineEdit::Normal);

     }else if(checkbox->checkState()==2)
    {
        zone_de_texte->setEchoMode(QLineEdit::Password);
    }

}

void MainWindow::Checkbox1()
{
    if(checkbox1->checkState()==0)
    {
        zone_de_texte1->setEchoMode(QLineEdit::Password);

     }else if(checkbox1->checkState()==2)
    {
        zone_de_texte1->setEchoMode(QLineEdit::NoEcho);
    }

}

MainWindow::~MainWindow()
{

}

