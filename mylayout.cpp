#include "mylayout.h"

#include "actionlayout.h"
#include "statuslayout.h"
#include "controllayout.h"

QBoxLayout* FactoryLayout::createLayout(Type type){
    switch (type) {
        case ACTION:
            return (QBoxLayout*) new ActionLayout();
            break;
        case STATUS:
            return (QBoxLayout*) new StatusLayout();
            break;
        case CONTROL:
            return (QBoxLayout*) new ControlLayout();
            break;
        default:
            return nullptr;
    }
}
