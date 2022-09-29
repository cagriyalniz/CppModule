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
    std::cout<< "a.getRaw"<<a.getRawBits()<<std::endl;
    std::cout<< "b.getRaw"<<b.getRawBits()<<std::endl;
    std::cout<< "c.getRaw"<<c.getRawBits()<<std::endl;

    
}