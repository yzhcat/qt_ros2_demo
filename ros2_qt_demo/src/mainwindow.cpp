#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->plainTextEdit->setPlainText("hello");
    this->commNode = new RclComm();
    connect(
        ui->pushButton, &QPushButton::clicked, this, [=]()
        { 
            this->commNode->_pub_msgs(ui->plainTextEdit->toPlainText());
            commNode->sping(); });
    connect(this->commNode, &RclComm::emitTopicData, this, [=](QString str)
            { ui->label->setText(str); });
}

MainWindow::~MainWindow()
{
    delete ui;
}
