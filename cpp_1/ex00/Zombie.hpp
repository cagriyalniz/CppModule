#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie{
    public:
        Zombie(){}
        Zombie(std::string name){this->name = name;}
        virtual ~Zombie(){}
    private:
        std::string name;
    


    public:
        std::string get_name();
        void set_name(std::string name);
        void announce(void);
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
};


std::string Zombie::get_name()
{
    return this->name;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}



void Zombie::announce(void){
    std::cout<<get_name()<<": BraiiiiiiinnnzzzZ...";
}

Zombie* Zombie::newZombie( std::string name ){
    Zombie* z;
    z = new Zombie(name);

    return (z);
}

void Zombie::randomChump( std::string name ){
    Zombie z(name);
    z.announce();
}



#endif 