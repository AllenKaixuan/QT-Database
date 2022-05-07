#include "mainwindow.h"
#include"log_in.h"
#include <QApplication>
#include"stusql.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    stuSql sql;
    return a.exec();
}
