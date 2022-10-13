/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:17:05 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/13 17:18:44 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    this->_type = "WrongCat";
    std::cout<<"Constructer calling from WrongCat class"<<std::endl;
}


WrongCat::~WrongCat(){
    std::cout<<"Deconstructer calling from WrongCat class"<<std::endl;
}

WrongCat::WrongCat(const WrongCat &src){
    std::cout<<"WrongCat Copy constructer called"<<std::endl;
    *this = src;
}

WrongCat& WrongCat::operator=(const WrongCat &src){
    std::cout <<"WrongCat Copy assignment operator called"<<std::endl;
    _type = src._type;
    return (*this);
}

void WrongCat::makeSound() const{
    std::cout<<this->getType()<<": miav"<<std::endl;
}