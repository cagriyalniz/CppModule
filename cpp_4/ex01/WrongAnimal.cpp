/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:46:38 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/13 17:13:47 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->_type = "";
    std::cout<<"Constructor calling from WrongAnimal class"<<std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout<<"Deconstructer calling from Animal class"<<std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src){
	std::cout << "WrongAnimal Copy constructor called"<<std::endl;
	*this = src; //this->_type = src._type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src){
	std::cout << "WrongAnimal Copy assignment operator called"<<std::endl;
	this->_type = src._type;
	return (*this);
}

//get set

std::string WrongAnimal::getType() const{
    return this->_type;
}

void WrongAnimal::makeSound() const{
    std::cout<<std::endl;
}