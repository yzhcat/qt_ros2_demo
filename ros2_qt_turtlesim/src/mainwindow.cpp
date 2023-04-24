#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QButtonGroup>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // ui->->setPlainText("hello");
    ui->lineEdit->setText("/turtle1/cmd_vel");
    QButtonGroup *btonG = new QButtonGroup(this);
    btonG->addButton(ui->pB_U, 0);
    btonG->addButton(ui->pB_D, 1);
    btonG->addButton(ui->pB_L, 2);
    btonG->addButton(ui->pB_R, 3);
    btonG->addButton(ui->pB_S, 4);
    btonG->addButton(ui->pB_UL, 5);
    btonG->addButton(ui->pB_UR, 6);
    btonG->addButton(ui->pB_DL, 7);
    btonG->addButton(ui->pB_DR, 8);
    this->commNode = new RclComm();

    // 设置话题
    connect(ui->pB_tpc, &QPushButton::clicked, this, [=]()
            { this->commNode->_set_pub(ui->lineEdit->text().toStdString()); });
    // 发送按键
    connect(btonG, QOverload<int>::of(&QButtonGroup::idClicked), this, &MainWindow::sendmsgs);
}

void MainWindow::sendmsgs(int id)
{
    if (this->commNode->_pub_is_ok)
        commNode->_pub_msgs(id);
    else
        QMessageBox::warning(this, "警告", "topic未设置");
}

MainWindow::~MainWindow()
{

    delete ui;
}
