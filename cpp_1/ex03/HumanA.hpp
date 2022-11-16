/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:58 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/05 15:42:49 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
    public:
        std::string _name;
        Weapon& _wpn;
        
        HumanA(Weapon& wpn);
        HumanA(std::string name, Weapon& wpn);
        virtual ~HumanA();
        std::string getName();
        void setName(std::string name);
        Weapon getWeapon();
        void setWeapon(Weapon &wpn);
        void attack(void);

};

class HumanC{
    public:
        std::string _name;
        Weapon _wpn;
        
        HumanC();
        HumanC(Weapon wpn);
        HumanC(std::string name);
        HumanC(std::string name, Weapon wpn);
        virtual ~HumanC();
        std::string getName();
        void setName(std::string name);
        Weapon getWeapon();
        void setWeapon(Weapon wpn);
        void attack(void);

};


#endif