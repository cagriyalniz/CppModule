#include "Zombie.hpp"


Zombie:: Zombie(){

}//constructer

Zombie::Zombie(std::string name){
    this->name = name;
}

Zombie::~Zombie(){
    std::cout<< get_name() << " is dead!" << std::endl;
}

std::string Zombie::get_name(){

    return this->name;
}

void Zombie::set_name(std::string name){

    this->name = name;
}


void Zombie::announce(void){

    std::cout<<get_name()<<": BraiiiiiiinnnzzzZ..."<< std::endl;;
}