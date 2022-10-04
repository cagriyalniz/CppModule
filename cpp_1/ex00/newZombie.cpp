/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:02 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/04 22:11:16 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Zombie* Zombie::newZombie( std::string name ){

    Zombie* z_ptr;
    
    Zombie zmb(name);
    z_ptr = &zmb;
    std::cout<< "newZombie func\n"<<std::endl;
    return (z_ptr);
} */

Zombie* newZombie( std::string name ){

    Zombie* z_ptr = new Zombie();
    z_ptr->set_name(name);
    return (z_ptr);
}