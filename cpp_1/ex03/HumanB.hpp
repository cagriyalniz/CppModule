/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:54 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/29 19:52:55 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
    private:
        std::string _name;
        Weapon *_wpn;
    
    public:
        HumanB(std:: string _name);
        virtual ~HumanB();
        std::string getName();
        void setName(std::string name);
        Weapon getWeapon();
        void setWeapon(Weapon &new_wpn);
        void attack(void);

};



#endif