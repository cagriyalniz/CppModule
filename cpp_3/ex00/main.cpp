/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:54:01 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/06 23:03:27 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap fighter("cagri");
    fighter.setAttackDamage(1);
    fighter.attack("XxX");
    fighter.setAttackDamage(3);
    std::cout<<fighter.getName()<<" energy is "<<
    fighter.getEnergyPoints()<<std::endl;
    while(fighter.getEnergyPoints() > 0){
        std::cout<<fighter.getName()<<" energy is "<<
        fighter.getEnergyPoints()<<std::endl;
        fighter.attack("XxX");
        /* if(fighter.getEnergyPoints() == 0)
            break ; */
    }
    fighter.takeDamage(1000);

}