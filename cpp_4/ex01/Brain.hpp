/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:27:16 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/13 17:54:05 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>

class Brain{
    public:
        std::string *ideas;//std::string ideas[100];
        Brain();
        virtual ~Brain();
        /* Brain(Brain const &src); */
        Brain &operator=(Brain const &src);
        std::string *getIdeas();
};

#endif