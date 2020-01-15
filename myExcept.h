 
#pragma once
#include <exception>
class myExcept : std::exception
{
    private:
    const char* string;
    public:
        myExcept(char* str)
        {
            string = str;
        }
        const char* what() const noexcept
        {
            return string;
        }
};