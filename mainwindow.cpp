#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "actionlayout.h"
#include <QWidget>
#include "mylayout.h"
#include "actionlayout.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QBoxLayout *tmp = new QBoxLayout(QBoxLayout::Down);
    _actionLayout = new ActionLayout();//(ActionLayout*)FactoryLayout::createLayout(FactoryLayout::Type::ACTION);
    //_statusLayout = FactoryLayout::createLayout(FactoryLayout::Type::STATUS);
    _controlLayout = new ControlLayout();//(ControlLayout*) FactoryLayout::createLayout(FactoryLayout::Type::CONTROL);
    //tmp->addLayout(_controlLayout);
    tmp->addLayout(_actionLayout);
    //tmp->addLayout(_statusLayout);
    QWidget* wid = new QWidget(this);
    this->setCentralWidget(wid);
    wid->setLayout(tmp);

    this->setLayout(tmp);
    this->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}

