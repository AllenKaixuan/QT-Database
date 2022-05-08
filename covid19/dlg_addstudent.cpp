#include "dlg_addstudent.h"
#include "ui_dlg_addstudent.h"
#include"stusql.h"
#include<QMessageBox>>
Dlg_addStudent::Dlg_addStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dlg_addStudent)
{
    ui->setupUi(this);
}

Dlg_addStudent::~Dlg_addStudent()
{
    delete ui;
}


void Dlg_addStudent::on_pushButton_clicked() //保存
{
    StuInfo info;
    auto ptr=stuSql::getinstance();
    info.college=ui->le_college->text();
    info.studentid=ui->le_stuid->text().toUInt();
    info.name=ui->le_name->text();
    info.domitory=ui->le_dormitory->text();
    info.date=ui->le_date->text();
    info.phone=ui->le_phone->text().toUInt();
    ptr->addStu(info);
    QMessageBox::information(nullptr,"提示","存储成功");
    this->hide();
}


void Dlg_addStudent::on_pushButton_2_clicked()  //退出
{
    this->hide();
}

