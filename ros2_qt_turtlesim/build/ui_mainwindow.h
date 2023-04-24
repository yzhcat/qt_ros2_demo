/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pB_tpc;
    QSpacerItem *verticalSpacer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QPushButton *pB_DL;
    QPushButton *pB_U;
    QPushButton *pB_UR;
    QPushButton *pB_R;
    QPushButton *pB_L;
    QPushButton *pB_S;
    QPushButton *pB_UL;
    QPushButton *pB_DR;
    QPushButton *pB_D;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(204, 240);
        MainWindow->setMinimumSize(QSize(204, 240));
        MainWindow->setMaximumSize(QSize(1000, 240));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(180000, 16777215));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 9, -1, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(100000, 16777215));

        horizontalLayout->addWidget(lineEdit);

        pB_tpc = new QPushButton(widget);
        pB_tpc->setObjectName(QString::fromUtf8("pB_tpc"));
        pB_tpc->setMinimumSize(QSize(72, 0));
        pB_tpc->setMaximumSize(QSize(72, 16777215));

        horizontalLayout->addWidget(pB_tpc);


        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(200, 200));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(9);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pB_DL = new QPushButton(widget_2);
        pB_DL->setObjectName(QString::fromUtf8("pB_DL"));
        pB_DL->setMinimumSize(QSize(50, 50));
        pB_DL->setMaximumSize(QSize(50, 50));
        QFont font;
        font.setPointSize(16);
        pB_DL->setFont(font);

        gridLayout->addWidget(pB_DL, 2, 0, 1, 1);

        pB_U = new QPushButton(widget_2);
        pB_U->setObjectName(QString::fromUtf8("pB_U"));
        pB_U->setMinimumSize(QSize(50, 50));
        pB_U->setMaximumSize(QSize(50, 50));
        pB_U->setFont(font);

        gridLayout->addWidget(pB_U, 0, 1, 1, 1);

        pB_UR = new QPushButton(widget_2);
        pB_UR->setObjectName(QString::fromUtf8("pB_UR"));
        pB_UR->setMinimumSize(QSize(50, 50));
        pB_UR->setMaximumSize(QSize(50, 50));
        pB_UR->setFont(font);

        gridLayout->addWidget(pB_UR, 0, 2, 1, 1);

        pB_R = new QPushButton(widget_2);
        pB_R->setObjectName(QString::fromUtf8("pB_R"));
        pB_R->setMinimumSize(QSize(50, 50));
        pB_R->setMaximumSize(QSize(50, 50));
        pB_R->setFont(font);

        gridLayout->addWidget(pB_R, 1, 2, 1, 1);

        pB_L = new QPushButton(widget_2);
        pB_L->setObjectName(QString::fromUtf8("pB_L"));
        pB_L->setMinimumSize(QSize(50, 50));
        pB_L->setMaximumSize(QSize(50, 50));
        pB_L->setFont(font);

        gridLayout->addWidget(pB_L, 1, 0, 1, 1);

        pB_S = new QPushButton(widget_2);
        pB_S->setObjectName(QString::fromUtf8("pB_S"));
        pB_S->setMinimumSize(QSize(50, 50));
        pB_S->setMaximumSize(QSize(50, 50));
        pB_S->setFont(font);

        gridLayout->addWidget(pB_S, 1, 1, 1, 1);

        pB_UL = new QPushButton(widget_2);
        pB_UL->setObjectName(QString::fromUtf8("pB_UL"));
        pB_UL->setMinimumSize(QSize(50, 50));
        pB_UL->setMaximumSize(QSize(50, 50));
        pB_UL->setFont(font);

        gridLayout->addWidget(pB_UL, 0, 0, 1, 1);

        pB_DR = new QPushButton(widget_2);
        pB_DR->setObjectName(QString::fromUtf8("pB_DR"));
        pB_DR->setMinimumSize(QSize(50, 50));
        pB_DR->setMaximumSize(QSize(50, 50));
        pB_DR->setFont(font);

        gridLayout->addWidget(pB_DR, 2, 2, 1, 1);

        pB_D = new QPushButton(widget_2);
        pB_D->setObjectName(QString::fromUtf8("pB_D"));
        pB_D->setMinimumSize(QSize(50, 50));
        pB_D->setMaximumSize(QSize(50, 50));
        pB_D->setFont(font);

        gridLayout->addWidget(pB_D, 2, 1, 1, 1);


        horizontalLayout_2->addWidget(widget_2);


        verticalLayout->addWidget(widget_3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "tur_control", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "/topic", nullptr));
        pB_tpc->setText(QCoreApplication::translate("MainWindow", "set topic", nullptr));
        pB_DL->setText(QCoreApplication::translate("MainWindow", "\342\206\273", nullptr));
        pB_U->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        pB_UR->setText(QCoreApplication::translate("MainWindow", "\342\237\263", nullptr));
        pB_R->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        pB_L->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        pB_S->setText(QCoreApplication::translate("MainWindow", "\342\233\224", nullptr));
        pB_UL->setText(QCoreApplication::translate("MainWindow", "\342\237\262", nullptr));
        pB_DR->setText(QCoreApplication::translate("MainWindow", "\342\206\272", nullptr));
        pB_D->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
