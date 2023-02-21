#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    QString name=ui->lineEdit_name->text();
    QString rollno=ui->lineEdit_2_rollno->text();
    QString email=ui->lineEdit_4_email->text();
    QString gender1=ui->radioButton_gender1->text();
    QString gender2=ui->radioButton_2_gender2->text();

    qint8 a=name.length();
    qint8 b=rollno.length();
    qint8 c=email.length();
    qint8 d=gender1.length();
    qint8 e=gender2.length();

    if(a!=0 &&b!=0&& c!=0 && d!=0 && e!=0){
        QMessageBox::information(this,"Message","SUBMITTED SUCCESSFULLY");
    }
    else
    {
        QMessageBox::warning(this,"Message","FILL THE DETAILS");
    }
}


void MainWindow::on_pushButton_2_clicked()
{
  QMessageBox::information(this,"Message","SUBMIT AGAIN");
}
