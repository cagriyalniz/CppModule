/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:56 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/05 16:00:16 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(){
    std::cout<<"humanB const"<<std::endl;
    return;
}

HumanB::HumanB(std::string name): _name(name){
    std::cout<<"humanB const"<<std::endl;
    return;
}

HumanB::~HumanB(){
    std::cout<<"humanB deconst"<<std::endl;
}

    
std::string HumanB::getName(){
    return _name;
}

void HumanB::setName(std::string name){
    _name = name;
}

void HumanB::setWeapon(Weapon &new_wpn){
    this->_wpn = &new_wpn;
}

void HumanB::attack(){
    
    std::cout<<getName()<<" " << this->_wpn->getType()<< std::endl;
}

