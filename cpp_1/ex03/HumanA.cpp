/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:53:00 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/29 19:53:00 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std:: string name, Weapon& wpn): _name(name), _wpn(wpn){
    return;
}
HumanA::~HumanA(){}

    
std::string HumanA::get_name(){
    return _name;
}

void HumanA::set_name(std::string name){
    _name = name;
}

Weapon HumanA::get_weapon(){
    return _wpn;
}

void HumanA::set_weapon(Weapon wpn){
    _wpn = wpn;
}

void HumanA::attack(){
    std::cout<<get_name()<<" "<<_wpn.get_type()<< std::endl;
}

