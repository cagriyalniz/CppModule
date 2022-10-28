/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:42:08 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/28 15:21:36 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(): _name("FORM"), _gradeSigned(1), _gradeExecute(1){
    std::cout<<"Constructer calling from From class"<<std::endl;
    this->_isSigned = false;
}

/* Form::Form(std::string const name, bool isSigned, int const gradeSigned, int const gradeExecute): _name(name), _isSigned(isSigned), _gradeSigned(gradeSigned), _gradeExecute(gradeExecute){
    if (gradeSigned < 1)
    std::cout<<"Parameter Constructer calling from Form class"<<std::endl;
} */

Form::Form(std::string name, int gradeSign, int gradeExecute):
    _name(name),
    _isSigned(false),
    _gradeSigned(gradeSign),
    _gradeExecute(gradeExecute){

        if (gradeSign < 1 || gradeExecute < 1)
            throw GradeTooLowException();
        else if (gradeSign > 150 || gradeExecute > 150)
            throw GradeTooHighException();
    std::cout<<"Constructer calling from Form class " <<std::endl;
}

Form::~Form(){
    std::cout<<"Deconstructer calling from Form class"<<std::endl;
}

Form::Form(const Form &src):
    _name(src.getName()),
    _isSigned(src.getIsSigned()),
    _gradeSigned(src.getGradeSigned()),
    _gradeExecute(src.getGradeExecute())
{
    std::cout<<"Form copy constructer"<<std::endl;
   

}

Form &Form::operator=(const Form &src){
    std::cout<<"Form copy assignment operator called"<<std::endl;
    if(this != &src)
        this->_isSigned = this->getIsSigned();
    return(*this);
}

std::string Form::getName() const{
    return this->_name;
}

int Form::getGradeSigned() const{
    return this->_gradeSigned;
}

int Form::getGradeExecute() const{
    return this->_gradeExecute;
}

bool Form::getIsSigned() const{
    return this->_isSigned;
}

void Form::beSigned(const Bureaucrat& bureaucrat){
    if(bureaucrat.getGrade() > this->getGradeSigned()){
        bureaucrat.
    }

}