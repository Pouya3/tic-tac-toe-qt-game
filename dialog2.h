#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>
#include <QLabel>

namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
    void doo(QString,QString,QString,QString);
    static int num;


    explicit Dialog2(QWidget *parent = nullptr);
    ~Dialog2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog2 *ui;
};

#endif // DIALOG2_H
