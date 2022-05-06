#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    m_dlgLogin.show();
      //隐藏主窗口，只显示登录窗口
    auto f =[&](){
        this->show();
    };
    connect(&m_dlgLogin,&log_in::sendLoginSuccess,this, f);  //登录成功自动跳到主界面
}

MainWindow::~MainWindow()
{
    delete ui;
}

