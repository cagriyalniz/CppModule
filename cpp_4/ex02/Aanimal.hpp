/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:00:30 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/13 17:09:26 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Aanimal_HPP
#define Aanimal_HPP

#include <iostream>
#include <string>

class Aanimal{
    public:
        std::string _type;

    public:
        Aanimal();
        virtual ~Aanimal() = 0;//0'a esitlenince abstract class'a cekmis oluyoruz
        Aanimal(Aanimal const &src);
    	Aanimal &operator=(Aanimal const &src);
        virtual std::string getType() const;
        virtual void makeSound() const;
};



#endif