/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:26:20 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/31 22:49:56 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
    std::cout<<"Constructer calling from Intern class"<<std::endl;
}

Intern::~Intern(){
    std::cout<<"Deconstructer calling from Intern class"<<std::endl;
}

Intern::Intern(const Intern &intern){
    (*this) = intern;
    std::cout<<"Copy constructer for Intern class"<<std::endl;
}

Intern &Intern::operator=(const Intern &src){
    (void)src;
    return *this;
}

Form *Intern::newPPForm(std::string target){
    return new PresidentialPardonForm(target);
}

Form *Intern::newRRForm(std::string target){
    return new RobotomyRequestForm(target);
}

Form *Intern::newSCForm(std::string target){
    return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(std::string name, std::string target){
    std::string forms[] = {"PPF", "RRF", "SCF"};
    Form *(Intern::*func[])(std::string target) = {
        &Intern::newPPForm,
        &Intern::newRRForm,
        &Intern::newSCForm
    };
    int i = -1;
    while(i++ < 3){
        if (name == forms[i]){
            return (this->*func[i])(target);
        }
    }
        std::cout << "Intern cannot create a form " << name << std::endl;
        return NULL;
}