/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:54:01 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/29 19:54:02 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap fighter("cagri");
    fighter.attack("XxX");
    fighter.setAttackDamage(3);
    std::cout<<fighter.getEnergyPoints()<<std::endl;
    while(fighter.getEnergyPoints() >= 0){
        fighter.attack("XxX");
        if(fighter.getEnergyPoints() == 0)
            break ;
    }
    fighter.takeDamage(1000);

}