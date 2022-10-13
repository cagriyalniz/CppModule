/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:00:30 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/13 17:09:26 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
    public:
        std::string _type;

    public:
        Animal();
        virtual ~Animal();
        Animal(Animal const &src);
    	Animal &operator=(Animal const &src);
        std::string getType() const;
        virtual void makeSound() const;
};



#endif