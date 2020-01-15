#pragma once
#include <QBoxLayout>
#include <QStatusBar>
#include <QBoxLayout>

#include "mylayout.h"

class StatusLayout : public FactoryLayout, QBoxLayout {
protected:
    QStatusBar *_statusBar;
    void _connect() override{return;};
public:
    StatusLayout();
};
