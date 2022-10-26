/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:42:08 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/26 16:25:05 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("FORM"), _gradeSigned(1), _gradeExecute(1){
    std::cout<<"Constructer calling from From class"<<std::endl;
    this->_isSigned = false;
}

Form::Form(std::string const name, bool isSigned, int const gradeSigned, int const gradeExecute): _name(name), _isSigned(isSigned), _gradeSigned(gradeSigned), _gradeExecute(gradeExecute){
    if (gradeSigned < 1)
        

    std::cout<<"Parameter Constructer calling from Form class"<<std::endl;
}

Form::~Form(){
    std::cout<<"Deconstructer calling from Form class"<<std::endl;
}

Form::Form(Form const &src){
    std::cout<<"Form copy constructer"<<std::endl;
    *this = src;
}

/* Form &Form::operator=(Form const &src){
    std::cout<<"Form copy assignment operator called"<<std::endl;
    
    
    return(*this);
} */

void Form::GradeTooLowException(){
    if (this->getGradeSigned() < 1)
        
}