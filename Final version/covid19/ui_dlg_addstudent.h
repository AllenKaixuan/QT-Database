/********************************************************************************
** Form generated from reading UI file 'dlg_addstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ADDSTUDENT_H
#define UI_DLG_ADDSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Dlg_addStudent
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *le_college;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *le_name;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *le_date;
    QLabel *label_6;
    QLineEdit *le_phone;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *le_stuid;
    QLineEdit *le_dormitory;

    void setupUi(QDialog *Dlg_addStudent)
    {
        if (Dlg_addStudent->objectName().isEmpty())
            Dlg_addStudent->setObjectName(QString::fromUtf8("Dlg_addStudent"));
        Dlg_addStudent->resize(358, 385);
        Dlg_addStudent->setStyleSheet(QString::fromUtf8("\n"
"QWidget#log_in{\n"
"	background-color:rgba(41,52,98,1);\n"
"};"));
        gridLayout = new QGridLayout(Dlg_addStudent);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Dlg_addStudent);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        le_college = new QLineEdit(Dlg_addStudent);
        le_college->setObjectName(QString::fromUtf8("le_college"));

        gridLayout->addWidget(le_college, 0, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(76, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        label_2 = new QLabel(Dlg_addStudent);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(Dlg_addStudent);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        le_name = new QLineEdit(Dlg_addStudent);
        le_name->setObjectName(QString::fromUtf8("le_name"));

        gridLayout->addWidget(le_name, 2, 1, 1, 2);

        label_4 = new QLabel(Dlg_addStudent);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(Dlg_addStudent);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        le_date = new QLineEdit(Dlg_addStudent);
        le_date->setObjectName(QString::fromUtf8("le_date"));

        gridLayout->addWidget(le_date, 4, 1, 1, 2);

        label_6 = new QLabel(Dlg_addStudent);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        le_phone = new QLineEdit(Dlg_addStudent);
        le_phone->setObjectName(QString::fromUtf8("le_phone"));

        gridLayout->addWidget(le_phone, 5, 1, 1, 2);

        pushButton = new QPushButton(Dlg_addStudent);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 6, 0, 1, 2);

        pushButton_2 = new QPushButton(Dlg_addStudent);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 6, 2, 1, 2);

        le_stuid = new QLineEdit(Dlg_addStudent);
        le_stuid->setObjectName(QString::fromUtf8("le_stuid"));

        gridLayout->addWidget(le_stuid, 1, 1, 1, 2);

        le_dormitory = new QLineEdit(Dlg_addStudent);
        le_dormitory->setObjectName(QString::fromUtf8("le_dormitory"));

        gridLayout->addWidget(le_dormitory, 3, 1, 1, 2);

        QWidget::setTabOrder(le_college, le_stuid);
        QWidget::setTabOrder(le_stuid, le_name);
        QWidget::setTabOrder(le_name, le_dormitory);
        QWidget::setTabOrder(le_dormitory, le_date);
        QWidget::setTabOrder(le_date, le_phone);
        QWidget::setTabOrder(le_phone, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(Dlg_addStudent);

        QMetaObject::connectSlotsByName(Dlg_addStudent);
    } // setupUi

    void retranslateUi(QDialog *Dlg_addStudent)
    {
        Dlg_addStudent->setWindowTitle(QCoreApplication::translate("Dlg_addStudent", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dlg_addStudent", "\345\255\246\351\231\242", nullptr));
        label_2->setText(QCoreApplication::translate("Dlg_addStudent", "\345\255\246\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_addStudent", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("Dlg_addStudent", "\345\256\277\350\210\215", nullptr));
        label_5->setText(QCoreApplication::translate("Dlg_addStudent", "\346\240\270\351\205\270\346\227\245\346\234\237", nullptr));
        label_6->setText(QCoreApplication::translate("Dlg_addStudent", "\347\224\265\350\257\235", nullptr));
        pushButton->setText(QCoreApplication::translate("Dlg_addStudent", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dlg_addStudent", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_addStudent: public Ui_Dlg_addStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ADDSTUDENT_H
