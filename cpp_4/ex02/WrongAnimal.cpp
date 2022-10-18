/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAanimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:46:38 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/13 17:13:47 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAanimal.hpp"

WrongAanimal::WrongAanimal(){
    this->_type = "";
    std::cout<<"Constructor calling from WrongAanimal class"<<std::endl;
}

WrongAanimal::~WrongAanimal(){
    std::cout<<"Deconstructer calling from Aanimal class"<<std::endl;
}

WrongAanimal::WrongAanimal(WrongAanimal const &src){
	std::cout << "WrongAanimal Copy constructor called"<<std::endl;
	*this = src; //this->_type = src._type;
}

WrongAanimal &WrongAanimal::operator=(WrongAanimal const &src){
	std::cout << "WrongAanimal Copy assignment operator called"<<std::endl;
	this->_type = src._type;
	return (*this);
}

//get set

std::string WrongAanimal::getType() const{
    return this->_type;
}

void WrongAanimal::makeSound() const{
    std::cout<<std::endl;
}