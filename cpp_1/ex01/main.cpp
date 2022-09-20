#include "Zombie.hpp"

int main()
{
    Zombie *z;
    z = zombieHorde(3, "cagriZzzz");
    z[0].announce();
    z[1].announce();
    z[2].announce();
    

}