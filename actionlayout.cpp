#include "actionlayout.h"
#include "mylayout.h"
#include <QTextEdit>
#include <QSizePolicy>
#include <iostream>
#include "staticparse.h"

ActionLayout::ActionLayout() :/*FactoryLayout(),*/ QBoxLayout(QBoxLayout::Down)//, FactoryLayout()
{
    QBoxLayout *tmp = new QBoxLayout(QBoxLayout::Direction::LeftToRight);
    _inputText = new QTextEdit();
    _outputText = new QTextEdit();
    _inputText->setText("2+3");
    tmp->addWidget(_inputText);
    tmp->addWidget(_outputText);

    _smalTutor = new QLabel("inpul like");
    this->addWidget(_smalTutor);
    this->addLayout(tmp);
    std::cout << "Action Layout" << std::endl;
    _connect();
}

ActionLayout::~ActionLayout()
{
    delete _inputText;
    delete _outputText;
    delete _smalTutor;
}

void ActionLayout::_connect()
{
    QObject::connect(_inputText, SIGNAL(textChanged()), this, SLOT(parseItem()));
     std::cout << "Connect" << std::endl;
}

void ActionLayout::parseItem()
{
    QStringList tmp = _inputText->toPlainText().split("\n");
    QStringList out("");
    for(auto it: tmp)
        out.append(StaticParse::parse(it)+ "\n");
    _outputText->setText(out.join(""));
    std::cout << StaticParse::parse(_inputText->toPlainText()).toStdString() << std::endl;
}
void ActionLayout::open()
{
    std::cout << "Open" << std::endl;
}

void ActionLayout::close()
{
    std::cout << "close" << std::endl;
}

