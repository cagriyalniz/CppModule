/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:55:52 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/13 17:09:48 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    this->_type = "Cat";
    std::cout<<"Constructer calling from Cat class"<<std::endl;
}

Cat::~Cat(){
    std::cout<<"Deconstructer calling from Cat class"<<std::endl;
}

Cat::Cat(const Cat &src){
    std::cout<<"Cat Copy constructer called"<<std::endl;
    *this = src;
}

Cat& Cat::operator=(const Cat &src){
    std::cout <<"Cat Copy assignment operator called"<<std::endl;
    _type = src._type;
    return (*this);
}

void Cat::makeSound() const{
    std::cout<<this->getType()<<": miav"<<std::endl;
}