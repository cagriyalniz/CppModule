/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:00 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/04 22:12:33 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie z;
    z.set_name("Foo");
    z.announce();

    Zombie* x;
    x = newZombie("asd");
    x->announce();
    randomChump("random");
    delete x;
}

/* Zombie* aPtr = new Zombie;  //This is an heap allocation
Zombie  bObj; //This is stack allocatio
In C++, variables on the heap must be destroyed manually and never fall out of scope.
The data is freed with delete, delete[], or free. */