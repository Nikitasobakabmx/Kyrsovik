#ifndef INPUT_H
#define INPUT_H
#include <QPushButton>
#include <QWidget>
#include <iostream>

class Input : public QWidget
{
public:
    QPushButton but;
    Input();
    Input(QString name);

};

#endif // INPUT_H
