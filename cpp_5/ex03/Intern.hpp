/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:26:07 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/31 22:35:54 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
    private:
        Form *newPPForm(std::string target);
        Form *newRRForm(std::string target);
        Form *newSCForm(std::string target);
    public:
        Intern();
        virtual ~Intern();
        Intern(const Intern &intern);
        Intern &operator=(const Intern &src);

        Form *makeForm(std::string name, std::string target);
};


#endif