#include "menu.h"
#include "ui_menu.h"
#include "first.h"
#include "don.h"
#include "GestionMatchEquipe.h"
#include "Accueil.h"
#include "bienvenu.h"
#include "gestionutlisateurtournois.h"
menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_clicked()
{
   // hide();
   // mDialog = new crud_materiel(this); // allocated space for a new MyDialog
   first c;

   c.exec();
   hide();
}

void menu::on_pushButton_3_clicked()
{
  //  hide();
    Don c;
    c.exec();
      hide();
}



void menu::on_pushButton_4_clicked()
{
  //  hide();
    this->close();
   mD= new gestion();

   mD->show();
}

void menu::on_pushButton_5_clicked()
{
   // hide();
    GestionMatchEquipe c;
    c.exec();
      hide();
}

void menu::on_pushButton_6_clicked()
{
  //hide();
    this->close();
 m= new bienvenu();
 m->show();
   //hide();
}

void menu::on_Utilisateurs_Tournois_clicked()
{   GestionUtlisateurTournois w ;
    hide();
    w.exec();

}
