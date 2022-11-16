/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:50 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/05 15:22:10 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon:: Weapon(){
    std::cout<<"weapon const"<<std::endl;
    
}

Weapon:: Weapon(std::string type): _type(type){
    std::cout<<"weapon const with param " <<_type<<std::endl;
    //this->type = type;
}

Weapon::~Weapon(){
    std::cout<<"weapon deconst "<<this->getType()<<std::endl;
}

const std::string Weapon::getType(){
    return this->_type;
}

void Weapon::setType(std::string type_name){
    this->_type = type_name;
    
    //std::cout<<"weapon new type:"<<this->get_type()<<std::endl;
}