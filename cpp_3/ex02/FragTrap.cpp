/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:02:02 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/10 15:57:54 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout<<"Constructor non-param called FragTrap for "<<this->getName()<<std::endl;

}

FragTrap::FragTrap(std::string _ftName): ClapTrap(_ftName){
    this->setName(_ftName);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout<<"Constructor with-param called FragTrap for "<<this->getName()<<std::endl;

}

FragTrap::~FragTrap(){
    std::cout<<"Destructor called FragTrap for "<<this->getName()<<std::endl;

}

void FragTrap::highFivesGuys(void){
    std::cout<<"HIGH FIVES 🖐️"<<std::endl;
}