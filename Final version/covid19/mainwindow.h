#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"stusql.h"
#include <QMainWindow>
#include"log_in.h"
#include"dlg_addstudent.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    virtual void keyPressEvent(QKeyEvent *event);

private slots:
    void on_pushButton_clicked();

    void on_btn_simulation_clicked();


    void on_btn_add_clicked();



    void on_btn_clear_clicked();
    void on_btn_del_clicked();



private:

    void updateTable();
private:
    Ui::MainWindow *ui;
    log_in m_dlgLogin;
    stuSql *m_ptrStuSql;
    QStringList m_lNames;
    Dlg_addStudent m_dlgAddStu;
};
#endif // MAINWINDOW_H
