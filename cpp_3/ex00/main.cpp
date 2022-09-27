#include "ClapTrap.hpp"

int main()
{
    ClapTrap fighter("cagri");
    fighter.attack("XxX");
    fighter.setAttackDamage(3);
    std::cout<<fighter.getEnergyPoints()<<std::endl;
    while(fighter.getEnergyPoints() >= 0){
        fighter.attack("XxX");
        if(fighter.getEnergyPoints() == 0)
            break ;
    }
    fighter.takeDamage(1000);

}