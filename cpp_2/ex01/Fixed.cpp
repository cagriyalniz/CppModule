/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:53:52 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/29 19:53:52 by cyalniz          ###   ########.fr       */
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

Fixed::Fixed(const int i_param)
{
    std::cout<<"integer Default constructor called"<<std::endl;
    this->_fixed_point_nmbr = i_param << this->_bits;
    
}

Fixed::Fixed(const float f_param)
{
    std::cout<<"integer Default constructor called"<<std::endl;
    this->_fixed_point_nmbr = (int)(roundf(f_param*(1<<this->_bits)));
    
}

float Fixed::toFloat( void ) const
{
    //that converts the fixed-point value to a floating-point value
    return ((float)this->_fixed_point_nmbr/(1<<this->_bits));
}

int Fixed::toInt( void ) const
{
    //that converts the fixed-point value to an integer value.
    return ((int)(this->_fixed_point_nmbr>>this->_bits));
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

std::ostream &operator<<(std::ostream &op, const Fixed &a){
    op<<a.toFloat();
    return (op);
}