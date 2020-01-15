#pragma once
#include <QBoxLayout>



class FactoryLayout
{
protected:
    virtual void _connect() = 0;
public:
    enum Type{
      ACTION = 0,
      STATUS,
      CONTROL
    };
    FactoryLayout(){};
    static QBoxLayout* createLayout(Type type);
    ~FactoryLayout(){};
};
