/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:52 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/05 15:22:01 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
     {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();

    }
    std::cout<<"\n";
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    } 
    
        //HumanA cagri;
        //HumanB yalniz;
/*         std::cout<<"\n";
        Weapon c = Weapon("crude spiked club");

        HumanC ccc("ccc", c);
        ccc.attack();
        std::cout<<"\n";

        c.setType("new type");
        ccc.attack(); */

      /*   HumanC fck("fckkk");
        std::cout<<fck._wpn.getType(); */
}