/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:27 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/04 22:27:37 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z;
    z = zombieHorde(3, "cagriZzzz");
    z[0].announce();
    z[1].announce();
    z[2].announce();
    delete[]z;
    //z->~Zombie();

}