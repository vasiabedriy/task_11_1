#ifndef TASK_1_H
#define TASK_1_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class task_1;
}

class task_1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit task_1(QWidget *parent = 0);
    ~task_1();

private slots:
    void on_close_clicked();

private:
    QPushButton* m_button;
};

#endif // TASK_1_H
