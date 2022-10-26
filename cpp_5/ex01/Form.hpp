/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:42:18 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/26 16:18:24 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeSigned;
        const int _gradeExecute;
    public:
        Form();
        Form(std::string const name, bool isSigned, const int gradeSigned,const int gradeExecute);
        virtual ~Form();
        Form(Form const &src);
        Form &operator=(Form const &src);

        std::string getName() const;
        bool getIsSigned();
        int getGradeSigned() const;
        int getGradeExecute() const;
        void GradeTooHighException();
        void GradeTooLowException();
        
};

#endif