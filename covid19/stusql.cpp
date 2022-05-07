#include "stusql.h"
#include<QMessageBox>
#include<QSqlDatabase>
#include <QSqlQuery>

stuSql::stuSql(QObject *parent)
    : QObject{parent}
{
    if (QSqlDatabase::drivers().isEmpty())
           QMessageBox::information(nullptr, tr("No database drivers found"),
                                    tr("This demo requires at least one Qt database driver. "
                                       "Please check the documentation how to build the "
                                       "Qt SQL plugins."));
    //添加数据库
        QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
        //绑定数据
        db.setDatabaseName("C:\\Users\\lxk68\\experiment\\QT\\laptop_pro16\\covid19\\database\\data.db");

        if(!db.open())
            QMessageBox::warning(nullptr,tr("Unable to open database"),tr("An error occured while"));
        QSqlQuery q("",db);
        q.exec("INSERT INTO student VALUES(NULL,'computer', 1911030, 'zyl', '学9', 5/5, 15940224444)");


}
