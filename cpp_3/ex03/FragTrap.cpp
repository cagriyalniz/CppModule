/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:02:02 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/29 20:15:46 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _ftName): ClapTrap(_ftName){
    this->setName(_ftName);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout<<"FragTrap constructer function is calling for "<<
    this->getName()<<std::endl;
}

FragTrap::~FragTrap(){
    std::cout<<"fragtrap deconstructer function is calling for "<<
    this->getName()<<std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout<<"HIGH FIVES 🖐️"<<std::endl;
}