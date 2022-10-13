/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:00:35 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/13 17:09:25 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
//const deconst
Animal::Animal(){
    this->_type = "";
    std::cout<<"Constructor calling from Animal class"<<std::endl;
}

Animal::~Animal(){
    std::cout<<"Deconstructer calling from Animal class"<<std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal Copy constructor called"<<std::endl;
	*this = src; //this->_type = src._type;
}

Animal &Animal::operator=(Animal const &src)
{
	std::cout << "Animal Copy assignment operator called"<<std::endl;
	this->_type = src._type;
	return (*this);
}

//get set

std::string Animal::getType() const{
    return this->_type;
}

void Animal::makeSound() const{
    std::cout<<std::endl;
}