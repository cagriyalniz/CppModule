#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    
    static Zombie *p_z;
    Zombie z[N];
    int i = 0;
    while(i < N)
    {
        z[i].set_name(name);
        //z[i].announce();
        //std::cout<<"\n";
        i++;
    }
    p_z = z;
    return p_z;
}