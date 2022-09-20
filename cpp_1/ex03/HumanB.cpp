#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std:: string name): _name(name), _wpn(NULL){
    return;
}
HumanB::~HumanB(){}

    
std::string HumanB::getName(){
    return _name;
}

void HumanB::setName(std::string name){
    _name = name;
}

Weapon HumanB::getWeapon(){
    
    return *_wpn;
}

void HumanB::setWeapon(Weapon& new_wpn){
    _wpn = &new_wpn;
}

void HumanB::attack(){
    
    std::cout<<getName()<<" "<<_wpn->get_type()<< std::endl;
}

