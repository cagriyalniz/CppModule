/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:58 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/29 19:52:58 by cyalniz          ###   ########.fr       */
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
        Weapon &_wpn;
        HumanA(std:: string name, Weapon& wpn);
        virtual ~HumanA();
        
        std::string get_name();
        void set_name(std::string name);
        Weapon get_weapon();
        void set_weapon(Weapon wpn);
        void attack(void);

};



#endif