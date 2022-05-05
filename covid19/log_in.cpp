#include "log_in.h"
#include "ui_log_in.h"

log_in::log_in(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::log_in)
{
    ui->setupUi(this);
}

log_in::~log_in()
{
    delete ui;
}







void log_in::on_pushButton_2_clicked()
{
    //练到数据库查找用户名和密码


    //失败则提示


    //成功进入主界面
    emit sendLoginSuccess();
}




void log_in::on_pushButton_clicked()
{
    exit(0); //退出
}

