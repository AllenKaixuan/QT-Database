#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db= QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("StudentInformationManagementSystem.db");
    if ( !db.open()){
           qDebug()<<"Not open!";
       }
    QSqlQuery query;//The QSqlQuery class provides methods for executing and operating SQL statements
  //Create database admin table
    query.exec("CREATE TABLE admin ("
                       "admin_account VARCHAR(40) PRIMARY KEY NOT NULL,"
                       "admin_password VARCHAR(40) NOT NULL)");
    //Create database student table
        query.exec("CREATE TABLE student ("
                       "id VARCHAR(50) PRIMARY KEY NOT NULL, "
                       "name VARCHAR(30) NOT NULL, "
                       "sex VARCHAR(10) NOT NULL, "
                       "age INTEGER NOT NULL,"
                       "address VARCHAR(50) NOT NULL,"
                       "phone_number VARCHAR(30) NOT NULL,"
                       "password VARCHAR(30) NOT NULL,"
                       "dormitory VARCHAR(30) NOT NULL,"
                       "className VARCHAR(30) NOT NULL)");
    query.exec("CREATE TABLE class ("
                       "name VARCHAR(40) PRIMARY KEY NOT NULL, "
                       "department VARCHAR(50) NOT NULL, "
                       "instructor VARCHAR(40) NOT NULL, "
                       "instructor_number VARCHAR(40) NOT NULL,"
                        "people_number INTEGER NOT NULL)");
    Login w;
    w.show();

    return a.exec();
}
