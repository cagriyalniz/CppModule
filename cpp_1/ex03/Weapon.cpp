#include "Weapon.hpp"

Weapon:: Weapon(){
    
}

Weapon:: Weapon(std::string type){
    this->type = type;
}

Weapon::~Weapon(){}

std::string Weapon::get_type(){
    return this->type;
}

void Weapon::set_type(std::string type_name){
    this->type = type_name;
}