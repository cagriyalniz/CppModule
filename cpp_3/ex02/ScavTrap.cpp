/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:54:18 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/10 15:58:53 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout<<"Constructor non-param called ScavTrap for "<<this->getName()<<std::endl;

}

ScavTrap::ScavTrap(std:: string _stName): ClapTrap(_stName){
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    this->setName(_stName);
    std::cout<<"Constructor with-param called ScavTrap for "<<this->getName()<<std::endl;
}

ScavTrap::~ScavTrap(){
       std::cout<<"Destructor called ScavTrap for "<<this->getName()<<std::endl;

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