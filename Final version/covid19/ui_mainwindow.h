/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QPushButton *btn_simulation;
    QTreeWidget *treeWidget;
    QPushButton *pushButton;
    QWidget *widget;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *lable_4;
    QPushButton *btn_clear;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBox;
    QPushButton *btn_del;
    QPushButton *btn_add;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(950, 588);
        MainWindow->setMinimumSize(QSize(170, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{background-color:rgba(41,52,98,1)}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget:rgba(13,63,103,1);\n"
"QPushButton{\n"
"background-color:#ffb549;\n"
"font: 700 9pt \"Microsoft YaHei UI\";\n"
"color:rgb(255, 255, 255)\n"
"}\n"
"\n"
""));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btn_simulation = new QPushButton(centralwidget);
        btn_simulation->setObjectName(QString::fromUtf8("btn_simulation"));
        btn_simulation->setMaximumSize(QSize(75, 16777215));

        gridLayout_3->addWidget(btn_simulation, 2, 2, 1, 1);

        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 0));
        treeWidget->setMaximumSize(QSize(160, 600));
        treeWidget->setStyleSheet(QString::fromUtf8("\n"
"font: 700 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgba(0,77,97,1);\n"
"color:rgb(255, 255, 255)"));
        treeWidget->setAutoScrollMargin(16);
        treeWidget->setHeaderHidden(true);
        treeWidget->header()->setDefaultSectionSize(100);

        gridLayout_3->addWidget(treeWidget, 1, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(75, 16777215));

        gridLayout_3->addWidget(pushButton, 2, 4, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(120, 50));
        widget_2->setMaximumSize(QSize(120, 50));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(120, 40));
        QFont font;
        font.setPointSize(9);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/user.jpg);"));

        gridLayout_2->addWidget(label_3, 0, 1, 1, 1);


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);


        gridLayout_3->addWidget(widget, 0, 0, 1, 2);

        lable_4 = new QLabel(centralwidget);
        lable_4->setObjectName(QString::fromUtf8("lable_4"));

        gridLayout_3->addWidget(lable_4, 2, 1, 1, 1);

        btn_clear = new QPushButton(centralwidget);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        btn_clear->setMaximumSize(QSize(75, 16777215));

        gridLayout_3->addWidget(btn_clear, 2, 3, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 0));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 132, 152);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        checkBox = new QCheckBox(page_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_4->addWidget(checkBox, 0, 0, 1, 1);

        btn_del = new QPushButton(page_2);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        btn_del->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(229,149,114,1);\n"
"font: 700 9pt \"Microsoft YaHei UI\";\n"
"color:rgb(255, 255, 255)\n"
"}"));

        gridLayout_4->addWidget(btn_del, 0, 3, 1, 1);

        btn_add = new QPushButton(page_2);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(229,149,114,1);\n"
"font: 700 9pt \"Microsoft YaHei UI\";\n"
"color:rgb(255, 255, 255)\n"
"}"));

        gridLayout_4->addWidget(btn_add, 0, 2, 1, 1);

        tableWidget = new QTableWidget(page_2);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font2;
        font2.setBold(true);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font2);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font2);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font2);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font2);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font2);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font2);
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(0, 6, __qtablewidgetitem15);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        tableWidget->setFont(font3);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout_4->addWidget(tableWidget, 1, 0, 1, 4);

        stackedWidget->addWidget(page_2);

        gridLayout_3->addWidget(stackedWidget, 1, 1, 1, 4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 950, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Kaixi", nullptr));
        btn_simulation->setText(QCoreApplication::translate("MainWindow", "\346\250\241\346\213\237\346\265\213\350\257\225", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Kaixi", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\346\240\270\351\205\270\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        lable_4->setText(QString());
        btn_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\210\227\350\241\250", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        btn_del->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        btn_add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\345\255\246\351\231\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\345\256\277\350\210\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\346\240\270\351\205\270\346\227\245\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\347\224\265\350\257\235", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\346\234\272\345\255\246\351\231\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "1911030", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "\345\210\230\345\270\214\345\207\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "\345\255\2469", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "5-05", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 6);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "18222270805", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
