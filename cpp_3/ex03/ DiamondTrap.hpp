/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    DiamondTrap.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:21:09 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/10 16:06:59 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap: public ClapTrap, public FragTrap{
    private:
        DiamondTrap();
    public:
        using FragTrap::hit

    
}

#endif