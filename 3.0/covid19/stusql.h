#ifndef STUSQL_H
#define STUSQL_H
#include <QDate>
#include <QObject>
struct StuInfo{
    QString college;
    int id;
    QString name;
    QString domitory;
    QDate time;
    int tele;

};
struct UserInfo{
    QString username;
    QString password;
    QString aut;  //权限
};
struct TeacherInfo{
    QString college;
    int id;
    QString name;
    QDate time;
    int tele;

};
struct OthersInfo{

    int id;
    QString name;
    QDate time;
    int tele;

};
class stuSql : public QObject
{
    Q_OBJECT
public:
    explicit stuSql(QObject *parent = nullptr);
    //查询所有学生数量

    //查询第几页学生的数据

    //增加学生

    //删除学生

    //清空

    //修改信息

    //查询所有用户

    //查询用户名是否存在

    //修改用户权限

    //添加单个用户

signals:

};

#endif // STUSQL_H
