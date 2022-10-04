/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:20 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/04 22:20:43 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    
    Zombie *p_z = new Zombie[N];
    int i = 0;
    while(i < N)
    {
        p_z[i].set_name(name);
        //z[i].announce();
        //std::cout<<"\n";
        i++;
    }
  
    return p_z;
}