#include "acces.hpp"

int main()
{
    Acces abc;
    abc.a = 3;
    std::cout<<abc.get_a()<<std::endl;
    std::cout<<sizeof(abc.get_a())<<std::endl;
    abc.b = 5;

}