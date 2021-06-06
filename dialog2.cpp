#include "dialog2.h"
#include "ui_dialog2.h"

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);

}
int Dialog2::num=0;
void Dialog2::doo(QString str1,QString str2,QString str3,QString str4)
{
    QLabel* lb1=new QLabel(str1);
    QLabel* lb2=new QLabel(str2);
    QLabel* lb3=new QLabel(str3);
    QLabel* lb4=new QLabel(str4);
    lb1->setAlignment(Qt::AlignCenter);
    lb2->setAlignment(Qt::AlignCenter);
    lb3->setAlignment(Qt::AlignCenter);
    lb4->setAlignment(Qt::AlignCenter);

    ui->tableWidget->insertRow(num);
    ui->tableWidget->setCellWidget(num,0,lb1);
    ui->tableWidget->setCellWidget(num,1,lb2);
    ui->tableWidget->setCellWidget(num,2,lb3);
    ui->tableWidget->setCellWidget(num,3,lb4);
    num++;

}
Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_pushButton_clicked()
{
    this->close();
}

