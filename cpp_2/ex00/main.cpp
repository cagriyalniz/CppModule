/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:53:30 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/29 19:53:30 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;
    std::cout<< "a: "<<a.getRawBits()<<std::endl;
    std::cout<< "b: "<<b.getRawBits()<<std::endl;
    std::cout<< "c: "<<c.getRawBits()<<std::endl;

    a.setRawBits(1);
    std::cout<< "a: "<<a.getRawBits()<<std::endl;
    std::cout<< "b: "<<b.getRawBits()<<std::endl;
    std::cout<< "c: "<<c.getRawBits()<<std::endl;
    
    b.setRawBits(2);
    std::cout<< "a: "<<a.getRawBits()<<std::endl;
    std::cout<< "b: "<<b.getRawBits()<<std::endl;
    std::cout<< "c: "<<c.getRawBits()<<std::endl;

    c.setRawBits(3);
    std::cout<< "a: "<<a.getRawBits()<<std::endl;
    std::cout<< "b: "<<b.getRawBits()<<std::endl;
    std::cout<< "c: "<<c.getRawBits()<<std::endl;
}