#include "HumanA.hpp"
 #include "Weapon.hpp"

HumanA::HumanA(std:: string name, Weapon wpn){
    this->name = name;
    this->wpn = wpn;
}
HumanA::~HumanA(){}

    
std::string HumanA::get_name(){
    return this->name;
}

void HumanA::set_name(std::string name){
    this->name = name;
}

void HumanA::attack(){
    std::cout<<this->wpn.get_type()<< std::endl;
}

