/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:54 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/05 15:59:15 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
    public:
        std::string _name;
        Weapon* _wpn;

        HumanB();
        HumanB(std::string name);
        virtual ~HumanB();
        std::string getName();
        void setName(std::string name);
        void setWeapon(Weapon &new_wpn);
        void attack(void);
    
/*     private:
        Weapon* _wpn; */

};



#endif