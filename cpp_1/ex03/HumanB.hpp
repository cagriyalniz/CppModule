#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
    public:
        HumanB(std:: string name);
        virtual ~HumanB();
        std::string name;
        Weapon wpn;

    
        std::string get_name();
        void set_name(std::string name);
        Weapon get_weapon();
        void set_weapon(Weapon wpn);
        void attack(void);

};



#endif