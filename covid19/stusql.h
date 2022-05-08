#ifndef STUSQL_H
#define STUSQL_H

#include <QObject>

#include <QSqlDatabase>
struct StuInfo{
    int id;
    QString college;
    int studentid;
    QString name;
    QString domitory;
    QString date;
    int phone;

};
struct UserInfo{
    int id;
    QString username;
    QString password;
    QString auth;  //权限
};


class stuSql : public QObject
{
    Q_OBJECT
public:
    static stuSql *ptrstuSql;  //类内声明的静态指针要在类外初始化 stuSql *stuSql::ptrstuSql=nullptr;
    static  stuSql *getinstance(){
        if(nullptr ==ptrstuSql) {
            ptrstuSql=new stuSql;
        }
        return ptrstuSql;
    }
    explicit stuSql(QObject *parent = nullptr);
    //初始化
    void init();
    //查询所有学生数量
   quint32 getStuCnt();
    //查询第几页学生的数据,从0开始
   QList<StuInfo> getPageStu(quint32 page,quint32 uiCnt );

    //增加学生
    bool  addStu(StuInfo info);
    //删除学生
    bool delStu(int id);
    //清空
    void clearStuTable();
    //修改信息
    bool UpdateStuInfo(StuInfo info);
    //查询所有用户
    QList<UserInfo> getAllUser();
    //查询用户名是否存在
    bool isExit(QString str);
    //修改用户信息
    bool changeUserAut(UserInfo info);
    //添加单个用户
    bool AddUser(UserInfo info);

    //删除单个用户
    bool delUser(QString strUserName);

signals:
private:
    QSqlDatabase m_db;
};

#endif // STUSQL_H
