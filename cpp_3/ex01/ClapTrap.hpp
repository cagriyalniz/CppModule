#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string _name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    
    public:
        ClapTrap(std::string name);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName();
        void setName(std::string name);
        int  getHitPoints();
        void setHitPoints(int newPoint);
        int  getEnergyPoints();
        void setEnergyPoints(int newEnergy);
        int  getAttackDamage();
        void setAttackDamage(int newAttack);


};

#endif