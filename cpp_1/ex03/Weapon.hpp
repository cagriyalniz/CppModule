#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string type);
        virtual ~Weapon();
        std::string get_type();
        void set_type(std::string type_name);
};

#endif