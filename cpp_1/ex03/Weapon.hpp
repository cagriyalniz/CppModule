/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:47 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/05 15:22:24 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
    private:
        std::string _type;
    public:
        Weapon();
        Weapon(std::string type);
        virtual ~Weapon();
        const std::string &getType();
        void setType(std::string type_name);
};

#endif