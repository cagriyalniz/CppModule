#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
    private:
        std::string name;
    public:
        Zombie();//constructer
        Zombie(std::string name);//constructer with parameter
        virtual ~Zombie();//destructer

        std::string get_name();
        void set_name(std::string name);
        void announce(void);
       // Zombie* zombieHorde(int N, std::string name);
};
Zombie* zombieHorde(int N, std::string name);


#endif 