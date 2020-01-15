#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mylayout.h"
#include "controllayout.h"
#include "actionlayout.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Connect()
    {
        QWidget::connect(_controlLayout, SIGNAL(init()), this, SLOT(curInit()));
    }
public slots:
    void curInit()
    {
        QWidget::connect(&_controlLayout->in->but, SIGNAL(relised()), _actionLayout, SLOT(open()));
    }
private:
    Ui::MainWindow *ui;
    ActionLayout* _actionLayout;
   // QLayout* _statusLayout;
    ControlLayout* _controlLayout;
};
#endif // MAINWINDOW_H
