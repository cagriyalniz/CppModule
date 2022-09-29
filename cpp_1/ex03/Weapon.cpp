/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:50 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/29 19:52:51 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon:: Weapon(){
    
}

Weapon:: Weapon(std::string type){
    this->type = type;
}

Weapon::~Weapon(){}

std::string Weapon::get_type(){
    return this->type;
}

void Weapon::set_type(std::string type_name){
    this->type = type_name;
}