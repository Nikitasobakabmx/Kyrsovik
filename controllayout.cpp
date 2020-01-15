#include "controllayout.h"
#include "mylayout.h"
#include <iostream>

ControlLayout::ControlLayout():/*FactoryLayout(),*/ QBoxLayout(QBoxLayout::Down)
{
    _toolBar = createToolBar(*(new QString("Tool bar")));
    this->addWidget(_toolBar);
    in - new Input("Open File");
    out - new Input("Save to file");
    std::cout << "init" << std::endl;
    emit init();
}

QToolBar* ControlLayout::createToolBar(QString& str)
{
    QToolBar* tmp = new QToolBar(str);
    tmp->addAction("Openfile", this, SLOT(openFile()));
    tmp->addAction("Save to sile", this, SLOT(saveToFile()));
    return tmp;
}
