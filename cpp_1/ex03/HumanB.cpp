#include "HumanB.hpp"
 #include "Weapon.hpp"

HumanB::HumanB(std:: string name){
    this->name = name;
/*     Weapon *p_wpn;
    p_wpn = &this->wpn;
    p_wpn = NULL; */
}
HumanB::~HumanB(){}

    
std::string HumanB::get_name(){
    return this->name;
}

void HumanB::set_name(std::string name){
    this->name = name;
}

Weapon HumanB::get_weapon(){
    return this->wpn;
}

void HumanB::set_weapon(Weapon wpn){
    this->wpn = wpn;
}

void HumanB::attack(){
    std::cout<<this->wpn.get_type()<< std::endl;
}

