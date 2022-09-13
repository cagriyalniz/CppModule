#ifndef ACCESS_HPP
#define ACCESS_HPP

#include <iostream>
#include <cctype>

class Acces{
    public:
        int a;
        Acces();
    private:
        int b;
    public:
    int get_a();
    int get_b();
};

#endif