#include "stusql.h"
#include<QCoreApplication>
#include<QMessageBox>
#include<QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include<QtDebug>

stuSql::stuSql(QObject *parent)
    : QObject{parent}
{
    init();
//    StuInfo s;
//   s.name="lxk";
//    for(int i=0;i<10;i++){
//        addStu(s);
//        }

        //q.exec("INSERT INTO student VALUES(NULL,'computer', 1911030, 'zyl', '学9',"yyyy-MM-dd", 15940224444)");
   //getStuCnt();
//    getPageStu(2,3);
   //delStu(2);
//    getStuCnt();
    //clearStuTable();

}

void stuSql::init()
{
    if (QSqlDatabase::drivers().isEmpty())
        qDebug()<<"No database drivers found.";

    //添加数据库
        m_db=QSqlDatabase::addDatabase("QSQLITE");
#if 0
      auto str=QCoreApplication::applicationDirPath()+"data.db"; //输出路径
      qDebug()<<str;
#endif

        m_db.setDatabaseName("C:\\Users\\lxk68\\experiment\\QT\\laptop_pro16\\covid19\\database\\data.db");

        if(!m_db.open())
            qDebug()<<"Unable to open database";

}

quint32 stuSql::getStuCnt()
{
    QSqlQuery sql(m_db);
    sql.exec("select count(id) from student;");
//    quint32 Count=0;
    while (sql.next()) {
//       Count=sql.value(0).toUInt();  //some error
        qDebug()<<sql.value(0).toUInt();
    }
//    return Count;
}

QList<StuInfo> stuSql::getPageStu(quint32 page, quint32 uiCnt)
{
    QList<StuInfo> l;
    QSqlQuery sql(m_db);
    QString strsql=QString("select * from student order by id limit %1 offset %2").arg(uiCnt).arg(uiCnt*page);
    sql.exec(strsql);
    StuInfo info;
    while (sql.next()) {
       info.college=sql.value(0).toString();
       info.id=sql.value(1).toUInt();
       info.name=sql.value(2).toString();
      info.domitory=sql.value(3).toString();
      info.time=sql.value(4).toString();
      info.tele=sql.value(5).toUInt();
      l.push_back(info);
    }
    return l;
}

bool stuSql::addStu(StuInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql=QString("insert into student values(null,'%1',%2,'%3','%4','%5',%6)").
            arg(info.college).
            arg(info.id).
            arg(info.name).
            arg(info.domitory).
            arg(info.time).
            arg(info.tele);
    qDebug()<<sql.exec(strSql);
}

bool stuSql::delStu(int id)
{
    QSqlQuery sql(m_db);
    QString strsql=QString("delete from student where id = %1;").arg(id);
    return sql.exec(strsql);
}

void stuSql::clearStuTable()
{
    QSqlQuery sql(m_db);
    QString strsql=QString("delete from student;");

    sql.exec(strsql);
     sql.exec(QString("UPDATE sqlite_sequence SET seq = 0 WHERE name = 'student';"));  //删除后将id设置为从1开始自增
}
