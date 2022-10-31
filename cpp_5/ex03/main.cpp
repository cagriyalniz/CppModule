/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:27:23 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/31 22:53:47 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
int main()
{
    try{
        /* Form myForm1("application", 20, 20);
        Bureaucrat b1("cyalniz", 10);

        myForm1.beSigned(b1);
        myForm1.beSigned(b1);
        Bureaucrat b2("yalnizc", 14);
       // b2.decBureac(12);
        Form myForm2("application2", 15, 12);
        myForm2.beSigned(b2); */

        PresidentialPardonForm myform("target");  
        Bureaucrat b1("cyalniz", 1);
       /*  myform.beSigned(b1);
        myform.execute(b1); */

/*         RobotomyRequestForm robForm("ttargett");
        robForm.beSigned(b1);
        robForm.execute(b1);        
        robForm.execute(b1);        
        robForm.execute(b1);     

        ShrubberyCreationForm shub("taargeet");
        shub.beSigned(b1);
        shub.execute(b1); */

        Intern inter;
        inter.makeForm("PPF", "InterMilan");

    }
    catch(std::exception & e){
        std::cout<< e.what() << std::endl;
    }
}