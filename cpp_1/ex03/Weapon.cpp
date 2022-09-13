#include "Weapon.hpp"

Weapon:: Weapon(std::string type){
    this->type = type;
}

std::string Weapon::get_type(){
    return this->type;
}

void Weapon::set_type(std::string type_name){
    this->type = type_name;
}