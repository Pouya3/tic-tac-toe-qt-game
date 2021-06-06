#include "ui_dialog.h"
#include "dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    emit for1(ui->lineEdit->text());
    emit for2(ui->lineEdit_2->text());

}

