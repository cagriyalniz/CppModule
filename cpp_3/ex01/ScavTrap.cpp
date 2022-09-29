#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std:: string _stName): ClapTrap(_stName){
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    this->setName(_stName);
    std::cout<<"ScavTrap constructer function "<<std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout<<this->getName()<<" is dead :("<<std::endl;
}

void ScavTrap::attack(std::string const& target){
    std::cout<<this->getName()<<" attacked to " <<target<<
    " causing"<< this->getAttackDamage()<< "points of damages"<< 
    std::endl;

}

void ScavTrap::guardGate(){
    std::cout<<this->getName()<<
    " is now Gate keeper!"<<std::endl;
}