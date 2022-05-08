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
    //菜单栏
    ui->treeWidget->clear();

    ui->treeWidget->setColumnCount(1);
    QStringList l;
    l<<"核酸信息管理系统";
    QTreeWidgetItem *pf=new QTreeWidgetItem(ui->treeWidget,l);
     ui->treeWidget->addTopLevelItem(pf) ; //设置表名称

     l.clear();
     l<<"学生管理";
     QTreeWidgetItem *p2=new QTreeWidgetItem(pf,l);







    l.clear();
    l<<"管理员管理";
    QTreeWidgetItem *p4=new QTreeWidgetItem(ui->treeWidget,l);


    pf->addChild(p2);

    pf->addChild(p4);
    ui->treeWidget->expandAll();
    ui->stackedWidget->setCurrentWidget(0);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    exit(0);
}

