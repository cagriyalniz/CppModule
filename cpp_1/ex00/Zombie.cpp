/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:06 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/04 22:13:47 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie:: Zombie(){
    std::cout<<get_name()<<" parametresiz born"<<std::endl;
}//constructer

Zombie::Zombie(std::string name){
    this->name = name;
    std::cout<<get_name()<<" parametreli born"<<std::endl;
}

Zombie::~Zombie(){
    std::cout<< get_name() << " is dead!" << std::endl;
}


std::string Zombie::get_name(){

    return this->name;
}

void Zombie::set_name(std::string name){

    this->name = name;
}


void Zombie::announce(void){

    std::cout<<get_name()<<": BraiiiiiiinnnzzzZ..."<< std::endl;;
}


