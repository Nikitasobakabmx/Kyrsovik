#ifndef CONTROLLAYOUT_H
#define CONTROLLAYOUT_H
#include <QToolBar>
#include <QBoxLayout>
#include "mylayout.h"
#include "input.h"

class ControlLayout : public QBoxLayout// public virtual FactoryLayout,
{
    Q_OBJECT
protected:
//    QPushButton* _openFileBut;
//    QPushButton* _saveInFileBut;
    QToolBar* _toolBar;

public:
    Input *in = nullptr;
    Input *out = nullptr;
    ControlLayout();
    QToolBar* createToolBar(QString&);

signals:
    void init();

public slots:
    void saveToFile()
    {
        if(in != nullptr)
            in->show();
    }
    void openFile()
    {
        if(out != nullptr)
            out->show();
    }

};

#endif // CONTROLLAYOUT_H
