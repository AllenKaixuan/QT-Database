#ifndef DLG_ADDSTUDENT_H
#define DLG_ADDSTUDENT_H

#include <QDialog>

namespace Ui {
class Dlg_addStudent;
}

class Dlg_addStudent : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_addStudent(QWidget *parent = nullptr);
    ~Dlg_addStudent();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dlg_addStudent *ui;
    bool m_isAdd;

};

#endif // DLG_ADDSTUDENT_H
