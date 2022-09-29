/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:53:19 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/29 19:53:19 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl{
    public:
        Harl();
        virtual ~Harl();
        void complain(std::string level);
    private:
        
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

typedef void (Harl::*t_func) ( void );

#endif