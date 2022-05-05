/********************************************************************************
** Form generated from reading UI file 'log_in.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_IN_H
#define UI_LOG_IN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_log_in
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *name;
    QLabel *label;
    QLineEdit *password;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *widget_3;
    QLabel *label_3;

    void setupUi(QWidget *log_in)
    {
        if (log_in->objectName().isEmpty())
            log_in->setObjectName(QString::fromUtf8("log_in"));
        log_in->resize(400, 250);
        log_in->setMinimumSize(QSize(400, 250));
        log_in->setMaximumSize(QSize(400, 250));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        log_in->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(log_in);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget_2 = new QWidget(log_in);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(11);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        name = new QLineEdit(widget_2);
        name->setObjectName(QString::fromUtf8("name"));
        name->setMaxLength(8);

        gridLayout->addWidget(name, 0, 1, 1, 1);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        password = new QLineEdit(widget_2);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMaxLength(8);
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(log_in);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 30));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(pushButton, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 2, 0, 1, 1);

        widget_3 = new QWidget(log_in);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 20, 211, 31));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(widget_3, 0, 0, 1, 1);


        retranslateUi(log_in);

        QMetaObject::connectSlotsByName(log_in);
    } // setupUi

    void retranslateUi(QWidget *log_in)
    {
        log_in->setWindowTitle(QCoreApplication::translate("log_in", "Kaixi", nullptr));
        label_2->setText(QCoreApplication::translate("log_in", "\347\224\250\346\210\267\345\220\215", nullptr));
        name->setPlaceholderText(QCoreApplication::translate("log_in", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        label->setText(QCoreApplication::translate("log_in", "\345\257\206\347\240\201", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("log_in", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("log_in", "\347\231\273\345\275\225", nullptr));
        pushButton->setText(QCoreApplication::translate("log_in", "\351\200\200\345\207\272", nullptr));
        label_3->setText(QCoreApplication::translate("log_in", "\346\240\270\351\205\270\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class log_in: public Ui_log_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_IN_H
