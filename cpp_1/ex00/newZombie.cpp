#include "Zombie.hpp"

/* Zombie* Zombie::newZombie( std::string name ){

    Zombie* z_ptr;
    
    Zombie zmb(name);
    z_ptr = &zmb;
    std::cout<< "newZombie func\n"<<std::endl;
    return (z_ptr);
} */

Zombie* newZombie( std::string name ){

    Zombie* z_ptr;
    
    Zombie zmb(name);
    z_ptr = &zmb;
    std::cout<< "newZombie func"<<std::endl;
    return (z_ptr);
}