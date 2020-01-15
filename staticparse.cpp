#include "staticparse.h"

#include <string>
#include "myExcept.h"
#include "Scanner.hpp"
#include "Parser.hpp"
#include "Calc.hpp"

StaticParse::StaticParse()
{

}


QString StaticParse::parse(QString line)
{
    try{
        Calc calc;
        Scanner scan(line.toStdString());
        Parser par(scan, calc);
        par.Parse();
        double result = par.Calculate();
        return QString(QString::number(result));
    }catch(myExcept* ex)
    {
        return QString("0");
    }

}
