/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:53:34 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/29 19:53:37 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// constr
Fixed::Fixed()
{
    std::cout<<"Default constructor called"<<std::endl;
    this->_fixed_point_nmbr = 0;
    
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout<<"Copy constructor called"<<std::endl;
//    this->setRawBits(copy.getRawBits());
    this->_fixed_point_nmbr = copy.getRawBits();
    //_store_nmbr_fractional_bits = copy.getStore_nmbr_fractional_bits();
}


// destr
Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

// opera
Fixed& Fixed::operator=(const Fixed &assign)
{
    std::cout<<"Copy assignment operator called "<<std::endl;
    if(this != &assign)
        this->_fixed_point_nmbr = assign.getRawBits();
    return(*this);
}

int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return this->_fixed_point_nmbr;
}

void Fixed::setRawBits(int const raw)
{
    std::cout<<"setRawBits member function called"<<std::endl;
    this->_fixed_point_nmbr = raw;
}