#pragma once
#include <QTextEdit>
#include <QLabel>

#include "mylayout.h"

class ActionLayout : public QBoxLayout//, public FactoryLayout
{
    Q_OBJECT
protected:
    QTextEdit *_outputText;
    QLabel *_smalTutor;

public:
    QTextEdit *_inputText;
    ActionLayout();
     void _connect();
    ~ActionLayout();
public slots:
     void parseItem();
     void open();
     void close();
};


