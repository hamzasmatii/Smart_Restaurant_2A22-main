#ifndef COMMANDE_H
#define COMMANDE_H


#include <QDialog>
#include "menu_c.h"


namespace Ui {
class commande;
}

class commande : public QDialog
{
    Q_OBJECT

public:
    explicit commande(QWidget *parent = nullptr);
    ~commande();
    void setModifier(int modifier){modif=modifier;}
    int getModifier() {return modif;}


private slots:
    void on_pushButton_34_clicked();

private:
    Ui::commande *ui;
    int modif;
    menu_c etmm;

};

#endif // COMMANDE_H
