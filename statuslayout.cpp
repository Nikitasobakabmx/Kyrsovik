#include "statuslayout.h"
#include "mylayout.h"

StatusLayout::StatusLayout():FactoryLayout(), QBoxLayout(QBoxLayout::Direction::LeftToRight)
{
    _statusBar = new QStatusBar();
    this->addWidget(_statusBar);
}
