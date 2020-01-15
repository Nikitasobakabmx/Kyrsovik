#ifndef Calc_hpp
#define Calc_hpp
#include "SymbolTable.hpp"
#include "Storage.hpp"
#include <stdio.h>
class Parser;
class Calc{
private:
    friend class Parser;
    SymbolTable sybTbl_;
    Storage storage_;
public:
    Calc():storage_(sybTbl_){}
    unsigned int FindSymbol(const std::string& str)const{
        return sybTbl_.Find(str);
    }
    unsigned int AddSymbol(const std::string& str){
        return sybTbl_.Add(str);
    }
     Storage& getStorage(){
        return storage_;
    }

};
#endif /* Calc_hpp */
