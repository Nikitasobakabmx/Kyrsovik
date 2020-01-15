#include "input.h"
#include <QLabel>
#include <QTextEdit>
#include <QBoxLayout>
#include <QPushButton>

Input::Input()
{

}
Input::Input(QString label)
{
    QLabel name(label);
    QTextEdit box("Input name of file");
    but.setText("go");
    QBoxLayout layout(QBoxLayout::Down);
    layout.addWidget(&name);
    layout.addWidget(&box);
    layout.addWidget(&but);
    this->setLayout(&layout);
    std::cout << "hoba" << std::endl;
}
