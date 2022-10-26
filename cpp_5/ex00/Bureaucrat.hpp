/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:27:00 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/26 16:41:46 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat{
    public:
        std::string const _name;
        int _grade;//1 - 150

        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        virtual ~Bureaucrat();
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat &operator=(Bureaucrat const &src);
        Bureaucrat operator ++ ();
        Bureaucrat operator -- ();

        std::string getName() const;
        int getGrade();
        void setGrade(int grade);
        void incBureac();
        void decBureac(int d);
        class GradeTooLowException : public std::exception{
            public:
                virtual const char* what() const throw();
        };
        class GradeTooHighException : public std::exception{
            public:
                virtual const char* what() const throw();
        };
};

#endif