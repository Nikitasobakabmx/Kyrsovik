#ifndef STATICPARSE_H
#define STATICPARSE_H

#include <QString>

class StaticParse
{
public:
    StaticParse();
    static QString parse(QString line);
};

#endif // STATICPARSE_H
