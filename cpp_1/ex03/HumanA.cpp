/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:53:00 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/05 15:42:57 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(Weapon& wpn): _wpn(wpn){
    this->_wpn = wpn;
    std::cout<<"humanA .const"<<std::endl;
    return;
}

HumanA::HumanA(std::string name, Weapon& wpn): _name(name), _wpn(wpn){

    std::cout<<"humanA const"<<std::endl;
    return;
}

HumanA::~HumanA(){
    std::cout<<"humanA deconst"<<std::endl;
}

    
std::string HumanA::getName(){
    return _name;
}

void HumanA::setName(std::string name){
    _name = name;
}

Weapon HumanA::getWeapon(){
    return _wpn;
}

void HumanA::setWeapon(Weapon &wpn){
    this->_wpn = wpn;
}

void HumanA::attack(){
    std::cout<<getName()<<" attack "<<_wpn.getType()<< std::endl;
}

//------------------------------

HumanC::HumanC(){
    std::cout<<"HumanC const"<<std::endl;
    return;
}

HumanC::HumanC(Weapon wpn): _wpn(wpn){
    this->_wpn = wpn;
    std::cout<<"HumanC .const"<<std::endl;
    return;
}

HumanC::HumanC(std::string name): _name(name){

    std::cout<<"HumanC const"<<std::endl;
    return;
}

HumanC::HumanC(std::string name, Weapon wpn): _name(name), _wpn(wpn){

    std::cout<<"HumanC const"<<std::endl;
    return;
}

HumanC::~HumanC(){
    std::cout<<"HumanC deconst"<<std::endl;
}

    
std::string HumanC::getName(){
    return _name;
}

void HumanC::setName(std::string name){
    _name = name;
}

Weapon HumanC::getWeapon(){
    return _wpn;
}

void HumanC::setWeapon(Weapon wpn){
    _wpn = wpn;
}

void HumanC::attack(){
    std::cout<<getName()<<" "<<this->getWeapon().getType()<< std::endl;
}
