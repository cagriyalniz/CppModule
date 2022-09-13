#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
    public:
        HumanA(std:: string name, Weapon wpn);
        virtual ~HumanA();
        std::string name;
        Weapon wpn;

    
        std::string get_name();
        void set_name(std::string name);
        void attack(void);

};



#endif