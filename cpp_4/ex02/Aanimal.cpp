/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:00:35 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/13 17:09:25 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aanimal.hpp"
//const deconst
 Aanimal::Aanimal(){
    this->_type = "";
    std::cout<<"Constructor calling from Aanimal class"<<std::endl;
}
 
Aanimal::~Aanimal(){
    std::cout<<"Deconstructer calling from Aanimal class"<<std::endl;
}

Aanimal::Aanimal(Aanimal const &src)
{
	std::cout << "Aanimal Copy constructor called"<<std::endl;
	*this = src; //this->_type = src._type;
}

Aanimal &Aanimal::operator=(Aanimal const &src)
{
	std::cout << "Aanimal Copy assignment operator called"<<std::endl;
	this->_type = src._type;
	return (*this);
}

//get set

std::string Aanimal::getType() const{
    return this->_type;
}

void Aanimal::makeSound() const{
    std::cout<<std::endl;
}