/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:20 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/29 19:52:21 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    
    static Zombie *p_z;
    Zombie z[N];
    int i = 0;
    while(i < N)
    {
        z[i].set_name(name);
        //z[i].announce();
        //std::cout<<"\n";
        i++;
    }
    p_z = z;
    return p_z;
}