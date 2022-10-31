/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:27:00 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/31 11:57:59 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat{
    private:
        const std::string _name;
        int _grade;//1 - 150
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        virtual ~Bureaucrat();
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator=(const Bureaucrat &src);
        Bureaucrat operator ++ ();
        Bureaucrat operator -- ();

        std::string getName() const;
        int getGrade() const;
        void setGrade(int grade);
        
        void incGrade();
        void decGrade();
        void incBureac(int i);
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

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& src);

#endif