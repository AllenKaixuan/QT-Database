#include "stusql.h"
#include<QCoreApplication>
#include<QMessageBox>
#include<QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include<QtDebug>
stuSql *stuSql::ptrstuSql=nullptr;
stuSql::stuSql(QObject *parent)
    : QObject{parent}
{
    //init();
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
//    StuInfo s;
//    s.id=5;
//    s.studentid=1911030;
//    UpdateStuInfo(s);
//    UserInfo info;
//    info.username="kaixi";
//    info.password="admin";
//    info.auth="admin";
//    AddUser(info);
//    AddUser(info);
//    auto l=getAllUser();
//    qDebug()<<isExit("kaixi");
//    info.password="root";
//    changeUserAut(info);
//    delUser("kaixi");

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
   quint32 Count=0;
    while (sql.next()) {
     Count=sql.value(0).toUInt();  //some error
//        qDebug()<<sql.value(0).toUInt();
    }
   return Count;
}

QList<StuInfo> stuSql::getPageStu(quint32 page, quint32 uiCnt)
{
    QList<StuInfo> l;
    QSqlQuery sql(m_db);
    QString strsql=QString("select * from student order by id limit %1 offset %2").arg(uiCnt).arg(page*uiCnt);
    sql.exec(strsql);
    StuInfo info;
    while (sql.next()) {
        info.id=sql.value(0).toUInt();
       info.college=sql.value(1).toString();
       info.studentid=sql.value(2).toUInt();
       info.name=sql.value(3).toString();
      info.domitory=sql.value(4).toString();
      info.date=sql.value(5).toString();
      info.phone=sql.value(6).toUInt();
    l.push_back(info);
    }
    return l;
}

bool stuSql::addStu(StuInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql=QString("insert into student values(null,'%1',%2,'%3','%4','%5',%6)").
            arg(info.college).
            arg(info.studentid).
            arg(info.name).
            arg(info.domitory).
            arg(info.date).
            arg(info.phone);
    return sql.exec(strSql);
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

bool stuSql::UpdateStuInfo(StuInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql=QString("update student set college= '%1',studentid=%2,name='%3',domitory='%4',date='%5',phone=%6 where id=%7").
            arg(info.college).
            arg(info.studentid).
            arg(info.name).
            arg(info.domitory).
            arg(info.date).
            arg(info.phone).
            arg(info.id);
     bool ret=sql.exec(strSql);
     QSqlError e = sql.lastError();  //可以查看sql语句是否有错误
     if(e.isValid()){
            qDebug()<<e.text();
     }
     return ret;
}

QList<UserInfo> stuSql::getAllUser()
{
    QList<UserInfo> l;
    QSqlQuery sql(m_db);
    sql.exec("select * from username");
    UserInfo info;
    while (sql.next()) {
       info.username=sql.value(0).toString();
       info.password=sql.value(1).toString();
       info.auth=sql.value(2).toString();
       l.push_back(info);
    }
    return l;
}

bool stuSql::isExit(QString str)
{

    QSqlQuery sql(m_db);
    sql.exec(QString("select *from username where username='%1';").arg(str));
    return sql.next();
}

bool stuSql::changeUserAut(UserInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql=QString("update username set password='%1',auth='%2' where username='%3';").

            arg(info.password).
            arg(info.auth).
            arg(info.username);

     bool ret=sql.exec(strSql);
     QSqlError e = sql.lastError();  //可以查看sql语句是否有错误
     if(e.isValid()){
            qDebug()<<e.text();
     }
     return ret;
}

bool stuSql::AddUser(UserInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql=QString("insert into username values ('%1', '%2', '%3');").
            arg(info.username).
            arg(info.password).
            arg(info.auth);
    return sql.exec(strSql);
}

bool  stuSql::delUser(QString strUserName)
{
    QSqlQuery sql(m_db);
    return sql.exec(QString("delete from username where username='%1';").arg(strUserName));

}
