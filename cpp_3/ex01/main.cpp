#include "ScavTrap.hpp"

int main()
{
    ScavTrap st1("red soldier");
    st1.guardGate();
    ClapTrap ct1("blue soldier");
    ct1.setAttackDamage(4);
    ct1.attack(st1.getName());
    st1.attack(ct1.getName());
    ct1.beRepaired(200);
    st1.beRepaired(200);
    
    
}