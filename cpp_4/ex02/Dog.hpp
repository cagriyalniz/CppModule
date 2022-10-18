/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:22:12 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/13 20:41:14 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Aanimal.hpp"
#include "Brain.hpp"

class Dog: public Aanimal{
    private:
        Brain* brain;
    public:
        Dog();
        ~Dog();
        //Dog(const Dog &src);
	    Dog& operator=(const Dog &src);

        virtual void makeSound() const;
};

#endif
