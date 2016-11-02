#include "glavnookno.h"
#include "ui_glavnookno.h"

glavnookno::glavnookno(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::glavnookno)
{
  ui->setupUi(this);
}

glavnookno::~glavnookno()
{
  delete ui;
}

void glavnookno::on_actionZapri_triggered()
{
    this->close();
}

void glavnookno::on_actionZa_ni_igro_triggered()
{
    QMessageBox::about(this, "V razvoju", "To je test");
    //ovde se pokliče funkcija za začetek nove igre
}

void glavnookno::on_actionZacni_igro_triggered()
{
    QMessageBox::about(this, "V razvoju", "To je test");
    //ovde se pokliče funkcija za začetek nove igre
}

void glavnookno::on_btnZacni_clicked()
{
  ui->frame->hide();
  QMessageBox::about(this, "V razvoju", "To je test");
}

void glavnookno::on_btnZapri_clicked()
{
    this->close();
}
