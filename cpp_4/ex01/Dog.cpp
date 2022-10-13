/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:22:17 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/13 20:58:42 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//construc deconsturc
Dog::Dog(){
	this->_type = "Dog";
	this->brain = new Brain();;
    std::cout<<"Constructer calling from Dog class"<<std::endl;
}

Dog::~Dog(){
	delete(this->brain);
    //this->brain->~Brain();
	std::cout<<"Deconstructer calling from Dog class"<<std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog Copy constructor called\n";
	*this = src;
}

Dog& Dog::operator=(const Dog &src)
{
	std::cout << "Dog Copy assignment operator called\n";
	_type = src._type;
	return (*this);
}


void Dog::makeSound() const{
    std::cout<<this->getType()<<": hav hav"<<std::endl;
}