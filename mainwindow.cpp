#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    d=new Dialog2(this);
    num=0;
    Name1=" ";
    Name2=" ";
    Dialog* d=new Dialog(this);
    connect(d,SIGNAL(for1(QString)),this,SLOT(show1(QString)));
    connect(d,SIGNAL(for2(QString)),this,SLOT(show2(QString)));
    for(int i=0;i<9;i++) arr[i]=0;
    p=new QGraphicsPixmapItem;
    d->show();
    ui->label_3->setText(Name1);
    ui->label_4->setText(Name2);
    first=0;
    second=0;
    ui->label_2->setText(QString::number(second));
    ui->label->setText(QString::number(first));
    ui->pushButton_10->setIcon(QPixmap("..\\toe\\jj.jpg"));
    ui->pushButton_11->setIcon(QPixmap("..\\toe\\ss.jpg"));
    ui->pushButton_10->setIconSize(QSize(172,172));
    ui->pushButton_11->setIconSize(QSize(130,130));
    s=new QGraphicsScene;
    s->addItem(p);
    ui->graphicsView->setScene(s);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(num%2==0)
    {
    ui->label_4->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
    ui->label_3->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");
    ui->pushButton->setIcon(QPixmap("..\\toe\\tt.png"));arr[0]=1;
    }
    else {ui->label_3->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_4->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");ui->pushButton->setIcon(QPixmap("..\\toe\\zz.png"));arr[0]=2;}
    num++;
    ui->pushButton->setIconSize(QSize(100,100));
    if((arr[0]==arr[1] && arr[1]==arr[2]) || (arr[0]==arr[3] && arr[3]==arr[6]) || (arr[0]==arr[4] && arr[4]==arr[8]))
    {
        if(arr[0]==1)
        {
            QMessageBox::information(this,"result","player number 1 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            first++;
            ui->label->setText(QString::number(first));
        }
        else if(arr[0]==2)
        {
            QMessageBox::information(this,"result","player number 2 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            second++;
            ui->label_2->setText(QString::number(second));
        }
    }
    else if(arr[0]!=0 && arr[1]!=0&& arr[2]!=0&& arr[3]!=0&& arr[4]!=0&& arr[5]!=0&& arr[6]!=0&& arr[7]!=0&& arr[8]!=0)
    {
        QMessageBox::information(this,"result","same :(((");
        ui->pushButton->setIcon(QPixmap());
        ui->pushButton_2->setIcon(QPixmap());
        ui->pushButton_3->setIcon(QPixmap());
        ui->pushButton_4->setIcon(QPixmap());
        ui->pushButton_5->setIcon(QPixmap());
        ui->pushButton_6->setIcon(QPixmap());
        ui->pushButton_7->setIcon(QPixmap());
        ui->pushButton_8->setIcon(QPixmap());
        ui->pushButton_9->setIcon(QPixmap());
        for(int i=0;i<9;i++) arr[i]=0;
    }

}

void MainWindow::set1(QString str)
{
    Name1=str;
}


void MainWindow::on_pushButton_2_clicked()
{
    if(num%2==0)
    {
        ui->label_4->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_3->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");
    ui->pushButton_2->setIcon(QPixmap("..\\toe\\tt.png"));arr[1]=1;
    }
    else {ui->label_3->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_4->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");ui->pushButton_2->setIcon(QPixmap("..\\toe\\zz.png"));arr[1]=2;}
    num++;
    ui->pushButton_2->setIconSize(QSize(100,100));
    if((arr[0]==arr[1] && arr[1]==arr[2]) || (arr[1]==arr[4] && arr[4]==arr[7]))
    {
        if(arr[1]==1)
        {
            QMessageBox::information(this,"result","player number 1 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            first++;
            ui->label->setText(QString::number(first));
        }
        else if(arr[1]==2)
        {
            QMessageBox::information(this,"result","player number 2 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            second++;
            ui->label_2->setText(QString::number(second));
        }
    }
    else if(arr[0]!=0 && arr[1]!=0&& arr[2]!=0&& arr[3]!=0&& arr[4]!=0&& arr[5]!=0&& arr[6]!=0&& arr[7]!=0&& arr[8]!=0)
    {
        QMessageBox::information(this,"result","same :(((");
        ui->pushButton->setIcon(QPixmap());
        ui->pushButton_2->setIcon(QPixmap());
        ui->pushButton_3->setIcon(QPixmap());
        ui->pushButton_4->setIcon(QPixmap());
        ui->pushButton_5->setIcon(QPixmap());
        ui->pushButton_6->setIcon(QPixmap());
        ui->pushButton_7->setIcon(QPixmap());
        ui->pushButton_8->setIcon(QPixmap());
        ui->pushButton_9->setIcon(QPixmap());
        for(int i=0;i<9;i++) arr[i]=0;
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    if(num%2==0)
    {
        ui->label_4->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_3->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");
    ui->pushButton_3->setIcon(QPixmap("..\\toe\\tt.png"));arr[2]=1;
    }
    else {ui->label_3->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_4->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");ui->pushButton_3->setIcon(QPixmap("..\\toe\\zz.png"));arr[2]=2;}
    num++;
    ui->pushButton_3->setIconSize(QSize(100,100));
    if((arr[0]==arr[1] && arr[1]==arr[2]) || (arr[2]==arr[5] && arr[5]==arr[8]) || (arr[2]==arr[4] && arr[4]==arr[6]))
    {
        if(arr[2]==1)
        {
            QMessageBox::information(this,"result","player number 1 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            first++;
            ui->label->setText(QString::number(first));
        }
        else if(arr[2]==2)
        {
            QMessageBox::information(this,"result","player number 2 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            second++;
            ui->label_2->setText(QString::number(second));
        }
    }
    else if(arr[0]!=0 && arr[1]!=0&& arr[2]!=0&& arr[3]!=0&& arr[4]!=0&& arr[5]!=0&& arr[6]!=0&& arr[7]!=0&& arr[8]!=0)
    {
        QMessageBox::information(this,"result","same :(((");
        ui->pushButton->setIcon(QPixmap());
        ui->pushButton_2->setIcon(QPixmap());
        ui->pushButton_3->setIcon(QPixmap());
        ui->pushButton_4->setIcon(QPixmap());
        ui->pushButton_5->setIcon(QPixmap());
        ui->pushButton_6->setIcon(QPixmap());
        ui->pushButton_7->setIcon(QPixmap());
        ui->pushButton_8->setIcon(QPixmap());
        ui->pushButton_9->setIcon(QPixmap());
        for(int i=0;i<9;i++) arr[i]=0;
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    if(num%2==0)
    {
        ui->label_4->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_3->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");
    ui->pushButton_4->setIcon(QPixmap("..\\toe\\tt.png"));arr[3]=1;
    }
    else {ui->label_3->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_4->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");ui->pushButton_4->setIcon(QPixmap("..\\toe\\zz.png"));arr[3]=2;}
    num++;
    ui->pushButton_4->setIconSize(QSize(100,100));
    if((arr[0]==arr[3] && arr[3]==arr[6]) || (arr[3]==arr[4] && arr[4]==arr[5]))
    {
        if(arr[3]==1)
        {
            QMessageBox::information(this,"result","player number 1 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            first++;
            ui->label->setText(QString::number(first));
        }
        else if(arr[3]==2)
        {
            QMessageBox::information(this,"result","player number 2 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            second++;
            ui->label_2->setText(QString::number(second));
        }
    }
    else if(arr[0]!=0 && arr[1]!=0&& arr[2]!=0&& arr[3]!=0&& arr[4]!=0&& arr[5]!=0&& arr[6]!=0&& arr[7]!=0&& arr[8]!=0)
    {
        QMessageBox::information(this,"result","same :(((");
        ui->pushButton->setIcon(QPixmap());
        ui->pushButton_2->setIcon(QPixmap());
        ui->pushButton_3->setIcon(QPixmap());
        ui->pushButton_4->setIcon(QPixmap());
        ui->pushButton_5->setIcon(QPixmap());
        ui->pushButton_6->setIcon(QPixmap());
        ui->pushButton_7->setIcon(QPixmap());
        ui->pushButton_8->setIcon(QPixmap());
        ui->pushButton_9->setIcon(QPixmap());
        for(int i=0;i<9;i++) arr[i]=0;
    }
}



void MainWindow::on_pushButton_5_clicked()
{
    if(num%2==0)
    {
        ui->label_4->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_3->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");
    ui->pushButton_5->setIcon(QPixmap("..\\toe\\tt.png"));arr[4]=1;
    }
    else {ui->label_3->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_4->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");ui->pushButton_5->setIcon(QPixmap("..\\toe\\zz.png"));arr[4]=2;}
    num++;
    ui->pushButton_5->setIconSize(QSize(100,100));
    if((arr[4]==arr[1] && arr[1]==arr[7]) || (arr[4]==arr[3] && arr[4]==arr[5]) || (arr[0]==arr[4] && arr[4]==arr[8]) || (arr[4]==arr[2] && arr[4]==arr[6]))
    {
        if(arr[4]==1)
        {
            QMessageBox::information(this,"result","player number 1 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            first++;
            ui->label->setText(QString::number(first));
        }
        else if(arr[4]==2)
        {
            QMessageBox::information(this,"result","player number 2 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            second++;
            ui->label_2->setText(QString::number(second));
        }
    }
    else if(arr[0]!=0 && arr[1]!=0&& arr[2]!=0&& arr[3]!=0&& arr[4]!=0&& arr[5]!=0&& arr[6]!=0&& arr[7]!=0&& arr[8]!=0)
    {
        QMessageBox::information(this,"result","same :(((");
        ui->pushButton->setIcon(QPixmap());
        ui->pushButton_2->setIcon(QPixmap());
        ui->pushButton_3->setIcon(QPixmap());
        ui->pushButton_4->setIcon(QPixmap());
        ui->pushButton_5->setIcon(QPixmap());
        ui->pushButton_6->setIcon(QPixmap());
        ui->pushButton_7->setIcon(QPixmap());
        ui->pushButton_8->setIcon(QPixmap());
        ui->pushButton_9->setIcon(QPixmap());
        for(int i=0;i<9;i++) arr[i]=0;
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    if(num%2==0)
    {
        ui->label_4->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_3->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");
    ui->pushButton_6->setIcon(QPixmap("..\\toe\\tt.png"));arr[5]=1;
    }
    else {ui->label_3->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_4->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");ui->pushButton_6->setIcon(QPixmap("..\\toe\\zz.png"));arr[5]=2;}
    num++;
    ui->pushButton_6->setIconSize(QSize(100,100));
    if((arr[5]==arr[2] && arr[5]==arr[8]) || (arr[5]==arr[4] && arr[4]==arr[3]))
    {
        if(arr[5]==1)
        {
            QMessageBox::information(this,"result","player number 1 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            first++;
            ui->label->setText(QString::number(first));
        }
        else if(arr[5]==2)
        {
            QMessageBox::information(this,"result","player number 2 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            second++;
            ui->label_2->setText(QString::number(second));
        }
    }
    else if(arr[0]!=0 && arr[1]!=0&& arr[2]!=0&& arr[3]!=0&& arr[4]!=0&& arr[5]!=0&& arr[6]!=0&& arr[7]!=0&& arr[8]!=0)
    {
        QMessageBox::information(this,"result","same :(((");
        ui->pushButton->setIcon(QPixmap());
        ui->pushButton_2->setIcon(QPixmap());
        ui->pushButton_3->setIcon(QPixmap());
        ui->pushButton_4->setIcon(QPixmap());
        ui->pushButton_5->setIcon(QPixmap());
        ui->pushButton_6->setIcon(QPixmap());
        ui->pushButton_7->setIcon(QPixmap());
        ui->pushButton_8->setIcon(QPixmap());
        ui->pushButton_9->setIcon(QPixmap());
        for(int i=0;i<9;i++) arr[i]=0;
    }
}


void MainWindow::on_pushButton_7_clicked()
{
    if(num%2==0)
    {
        ui->label_4->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_3->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");
    ui->pushButton_7->setIcon(QPixmap("..\\toe\\tt.png"));arr[6]=1;
    }
    else {ui->label_3->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_4->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");ui->pushButton_7->setIcon(QPixmap("..\\toe\\zz.png"));arr[6]=2;}
    num++;
    ui->pushButton_7->setIconSize(QSize(100,100));
    if((arr[6]==arr[3] && arr[3]==arr[0]) || (arr[6]==arr[7] && arr[7]==arr[8]) || (arr[6]==arr[2] && arr[2]==arr[4]))
    {
        if(arr[6]==1)
        {
            QMessageBox::information(this,"result","player number 1 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            first++;
            ui->label->setText(QString::number(first));
        }
        else if(arr[6]==2)
        {
            QMessageBox::information(this,"result","player number 2 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            second++;
            ui->label_2->setText(QString::number(second));
        }
    }
    else if(arr[0]!=0 && arr[1]!=0&& arr[2]!=0&& arr[3]!=0&& arr[4]!=0&& arr[5]!=0&& arr[6]!=0&& arr[7]!=0&& arr[8]!=0)
    {
        QMessageBox::information(this,"result","same :(((");
        ui->pushButton->setIcon(QPixmap());
        ui->pushButton_2->setIcon(QPixmap());
        ui->pushButton_3->setIcon(QPixmap());
        ui->pushButton_4->setIcon(QPixmap());
        ui->pushButton_5->setIcon(QPixmap());
        ui->pushButton_6->setIcon(QPixmap());
        ui->pushButton_7->setIcon(QPixmap());
        ui->pushButton_8->setIcon(QPixmap());
        ui->pushButton_9->setIcon(QPixmap());
        for(int i=0;i<9;i++) arr[i]=0;
    }
}


void MainWindow::on_pushButton_8_clicked()
{
    if(num%2==0)
    {
        ui->label_4->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_3->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");
    ui->pushButton_8->setIcon(QPixmap("..\\toe\\tt.png"));arr[7]=1;
    }
    else {ui->label_3->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_4->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");ui->pushButton_8->setIcon(QPixmap("..\\toe\\zz.png"));arr[7]=2;}
    num++;
    ui->pushButton_8->setIconSize(QSize(100,100));
    if((arr[7]==arr[6] && arr[6]==arr[8]) || (arr[7]==arr[1] && arr[1]==arr[4]))
    {
        if(arr[7]==1)
        {
            QMessageBox::information(this,"result","player number 1 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            first++;
            ui->label->setText(QString::number(first));
        }
        else if(arr[7]==2)
        {
            QMessageBox::information(this,"result","player number 2 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            second++;
            ui->label_2->setText(QString::number(second));
        }
    }
    else if(arr[0]!=0 && arr[1]!=0&& arr[2]!=0&& arr[3]!=0&& arr[4]!=0&& arr[5]!=0&& arr[6]!=0&& arr[7]!=0&& arr[8]!=0)
    {
        QMessageBox::information(this,"result","same :(((");
        ui->pushButton->setIcon(QPixmap());
        ui->pushButton_2->setIcon(QPixmap());
        ui->pushButton_3->setIcon(QPixmap());
        ui->pushButton_4->setIcon(QPixmap());
        ui->pushButton_5->setIcon(QPixmap());
        ui->pushButton_6->setIcon(QPixmap());
        ui->pushButton_7->setIcon(QPixmap());
        ui->pushButton_8->setIcon(QPixmap());
        ui->pushButton_9->setIcon(QPixmap());
        for(int i=0;i<9;i++) arr[i]=0;
    }
}


void MainWindow::on_pushButton_9_clicked()
{
    if(num%2==0)
    {
        ui->label_4->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_3->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");
    ui->pushButton_9->setIcon(QPixmap("..\\toe\\tt.png"));arr[8]=1;
    }
    else {ui->label_3->setStyleSheet("font-weight:bold; color:rgb(33, 133, 145);");
        ui->label_4->setStyleSheet("font-weight:; color:rgb(33, 133, 145);");ui->pushButton_9->setIcon(QPixmap("..\\toe\\zz.png"));arr[8]=2;}
    num++;
    ui->pushButton_9->setIconSize(QSize(100,100));
    if((arr[8]==arr[2] && arr[2]==arr[5]) || (arr[6]==arr[7] && arr[7]==arr[8]) || (arr[8]==arr[4] && arr[0]==arr[4]))
    {
        if(arr[8]==1)
        {
            QMessageBox::information(this,"result","player number 1 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            first++;
            ui->label->setText(QString::number(first));
        }
        else if(arr[8]==2)
        {
            QMessageBox::information(this,"result","player number 2 won!");
            ui->pushButton->setIcon(QPixmap());
            ui->pushButton_2->setIcon(QPixmap());
            ui->pushButton_3->setIcon(QPixmap());
            ui->pushButton_4->setIcon(QPixmap());
            ui->pushButton_5->setIcon(QPixmap());
            ui->pushButton_6->setIcon(QPixmap());
            ui->pushButton_7->setIcon(QPixmap());
            ui->pushButton_8->setIcon(QPixmap());
            ui->pushButton_9->setIcon(QPixmap());
            for(int i=0;i<9;i++) arr[i]=0;
            second++;
            ui->label_2->setText(QString::number(second));
        }
    }
    else if(arr[0]!=0 && arr[1]!=0&& arr[2]!=0&& arr[3]!=0&& arr[4]!=0&& arr[5]!=0&& arr[6]!=0&& arr[7]!=0&& arr[8]!=0)
    {
        QMessageBox::information(this,"result","same :(((");
        ui->pushButton->setIcon(QPixmap());
        ui->pushButton_2->setIcon(QPixmap());
        ui->pushButton_3->setIcon(QPixmap());
        ui->pushButton_4->setIcon(QPixmap());
        ui->pushButton_5->setIcon(QPixmap());
        ui->pushButton_6->setIcon(QPixmap());
        ui->pushButton_7->setIcon(QPixmap());
        ui->pushButton_8->setIcon(QPixmap());
        ui->pushButton_9->setIcon(QPixmap());
        for(int i=0;i<9;i++) arr[i]=0;
    }
}


void MainWindow::on_pushButton_13_clicked()
{
    ui->pushButton->setIcon(QPixmap());
    ui->pushButton_2->setIcon(QPixmap());
    ui->pushButton_3->setIcon(QPixmap());
    ui->pushButton_4->setIcon(QPixmap());
    ui->pushButton_5->setIcon(QPixmap());
    ui->pushButton_6->setIcon(QPixmap());
    ui->pushButton_7->setIcon(QPixmap());
    ui->pushButton_8->setIcon(QPixmap());
    ui->pushButton_9->setIcon(QPixmap());
    for(int i=0;i<9;i++) arr[i]=0;
}

void MainWindow::show1(QString str)
{
    ui->label_3->setText(str);
}

void MainWindow::show2(QString str)
{
    ui->label_4->setText(str);
}


void MainWindow::on_pushButton_12_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_14_clicked()
{
    d->doo(ui->label_3->text(),ui->label->text(),ui->label_2->text(),ui->label_4->text());
    ui->pushButton->setIcon(QPixmap());
    ui->pushButton_2->setIcon(QPixmap());
    ui->pushButton_3->setIcon(QPixmap());
    ui->pushButton_4->setIcon(QPixmap());
    ui->pushButton_5->setIcon(QPixmap());
    ui->pushButton_6->setIcon(QPixmap());
    ui->pushButton_7->setIcon(QPixmap());
    ui->pushButton_8->setIcon(QPixmap());
    ui->pushButton_9->setIcon(QPixmap());
    for(int i=0;i<9;i++) arr[i]=0;
    ui->label->setText(QString::number(0));
    ui->label_2->setText(QString::number(0));
    first=0;second=0;
}


void MainWindow::on_pushButton_15_clicked()
{
    d->show();
}

