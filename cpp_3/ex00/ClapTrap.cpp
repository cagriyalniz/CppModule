/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:54:06 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/06 22:59:20 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//constr
ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout<<"Constructor called ClapTrap"<<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"Destructor called ClapTrap"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    this->_name = copy._name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout<<"copy class has been created"<<std::endl;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &assign){
    if(this != &assign){
        this->_name = assign._name;
        this->hitPoints = assign.hitPoints;
        this->energyPoints = assign.energyPoints;
        this->attackDamage = assign.attackDamage;
    }
    std::cout<<"Copy ClapTrap assignment operator called"<<std::endl;
    return *this;
}


//setter getter

std::string ClapTrap::getName()
{
    return this->_name;
}
void ClapTrap::setName(std::string name)
{
    this->_name = name;
}
unsigned int  ClapTrap::getHitPoints()
{
    return this->hitPoints;
}
void ClapTrap::setHitPoints(unsigned int newPoint)
{
    this->hitPoints = newPoint;
}
unsigned int  ClapTrap::getEnergyPoints()
{
    return this->energyPoints;
}
void ClapTrap::setEnergyPoints(unsigned int newEnergy)
{
    this->energyPoints = newEnergy;
}
int  ClapTrap::getAttackDamage()
{
    return this->attackDamage;
}
void ClapTrap::setAttackDamage(unsigned int newAttack)
{
    this->attackDamage = newAttack;
}

//member functions

void ClapTrap::attack(const std::string& target)
{
    if (this->getEnergyPoints() > 0){
        std::cout<<this->getName()<<
        " attack to " << target << " causing " <<
        this->getAttackDamage() << " points of damage"<<
        std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
    else if(this->getEnergyPoints() <= 0){
        std::cout<< this->getName()<<" does not enough energy: "<<
        this->getEnergyPoints();
    }
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->setEnergyPoints(this->getEnergyPoints() - amount);
    std::cout<<this->getName()<<" take "<<
    amount<< " damage"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->getEnergyPoints() > 0){
        std::cout<<this->getName()<<" health "<<
        amount<<" points increased"<<std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
    else{
        std::cout<< this->getName()<<" does not enough energy: "<<
        this->getEnergyPoints();
    }

}

