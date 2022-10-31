/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:42:18 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/31 10:52:35 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include <exception>
class Form{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeSigned;
        const int _gradeExecute;
    public:
        Form();
        Form(std::string const name, bool isSigned, const int gradeSigned,const int gradeExecute);
        Form(std:: string name, int gradeSign, int gradeExecute);
        virtual ~Form();
        Form(const Form &src);
        Form &operator=(const Form &src);

        std::string getName() const;
        bool getIsSigned() const;
        int getGradeSigned() const;
        int getGradeExecute() const;

        void beSigned(const Bureaucrat& bureaucrat);
                
        class GradeTooLowException : public std::exception{
            public:
                virtual const char* what() const throw();
        };
        class GradeTooHighException : public std::exception{
            public:
                virtual const char* what() const throw();
        };
        
};

std::ostream& operator<<(std::ostream& stream, const Form& other);


/*
const üye işlevleri, programda sabit olarak bildirilen işlevlerdir.
Bu işlevler tarafından çağrılan nesne değiştirilemez.
Nesnede yanlışlıkla yapılan değişikliklerden kaçınmak için 
const anahtar sözcüğünün kullanılması önerilir.
*/
#endif