#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;
    std::cout<< "a.getRaw"<<a.getRawBits()<<std::endl;
    std::cout<< "b.getRaw"<<b.getRawBits()<<std::endl;
    std::cout<< "c.getRaw"<<c.getRawBits()<<std::endl;

    
}