/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:50:35 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/10 15:50:35 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//constr

ClapTrap::ClapTrap(){
    std::cout<<"Constructor called for Claptrap without param"<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout<<"Constructor called for Claptrap with param"<<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout<<this->getName()<<"deconst for Claptrap("<<this->getName()<<")"<<std::endl;
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
int  ClapTrap::getHitPoints()
{
    return this->hitPoints;
}
void ClapTrap::setHitPoints(int newPoint)
{
    this->hitPoints = newPoint;
}
int  ClapTrap::getEnergyPoints()
{
    return this->energyPoints;
}
void ClapTrap::setEnergyPoints(int newEnergy)
{
    this->energyPoints = newEnergy;
}
int  ClapTrap::getAttackDamage()
{
    return this->attackDamage;
}
void ClapTrap::setAttackDamage(int newAttack)
{
    this->attackDamage = newAttack;
}

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
        std::cout<< this->getName()<<" does not enough energy"<<
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
        std::cout<< this->getName()<<" does not enough energy"<<
        this->getEnergyPoints();
    }

}