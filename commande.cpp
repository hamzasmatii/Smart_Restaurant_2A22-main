#include "commande.h"
#include "ui_commande.h"
#include "mainwindow.h"


commande::commande(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::commande)
{
    ui->setupUi(this);
    ui->tableView_13->setModel(etmm.afficher_menu());


}

commande::~commande()
{
    delete ui;
}

void commande::on_pushButton_34_clicked()
{
    hide();
    MainWindow *newmain= new MainWindow();
    newmain->show();

}
