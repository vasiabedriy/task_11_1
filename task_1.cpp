#include "task_1.h"



task_1::task_1(QWidget *parent) :
    QMainWindow(parent)
{
    m_button = new QPushButton("Close",this);
    m_button->setGeometry(QRect(QPoint(30,30),QSize(50,20)));
    connect(m_button, SIGNAL(clicked()), this ,SLOT(on_close_clicked()));
}

task_1::~task_1()
{
    delete m_button;
}

void task_1::on_close_clicked()
{
    close();
}
