/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:27:10 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/31 10:52:22 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return ("error : more");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return ("error: low");
} */

Bureaucrat::Bureaucrat(): _name(""), _grade(1){
    std::cout<<"Constructer calling from Bureaucrat class"<<std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
    std::cout<<"Parameter Constructer calling from Bureaucrat class"<<std::endl;
    //throwlar gelecek buraya

    if (grade < 1)
        throw GradeTooLowException();
    else if (grade > 150)
        throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat(){
    std::cout<<"Deconstructer calling from Bureaucrat class"<<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): _name(src.getName()), _grade(src.getGrade()){
    std::cout<<"Bureaucrat copy constructer"<<std::endl;
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src){
    std::cout<<"Bureaucrat copy assignment operator called"<<std::endl;
    if (this != &src)
        this->setGrade(src.getGrade());
    return(*this);
}

Bureaucrat Bureaucrat::operator ++ (){
    this->setGrade(this->getGrade() + 1);
    return (*this);
}

Bureaucrat Bureaucrat::operator -- (){
    this->setGrade(this->getGrade() - 1);
    return (*this);
}


//get set

std::string Bureaucrat::getName() const{
    return this->_name;
}

int Bureaucrat::getGrade() const{
    return this->_grade;
}

void Bureaucrat::setGrade(int grade){
    this->_grade = grade;
}

void Bureaucrat::incBureac(int i){
    if (this->getGrade() - i <  1)
        throw GradeTooLowException();
    else
        this->_grade -= i;
}

void Bureaucrat::decBureac(int d){
    if (this->getGrade() + d > 150)
        throw GradeTooHighException();
    else
        this->_grade += d;
}

void Bureaucrat::singForm(const std::string &name, bool hasSigned, const std::string& reason) const
{
    if (hasSigned){
        std::cout << this->getName() << " signed " << name << std::endl;
    }
    else{
        std::cout<< this->getName() << " couldn't sign " << _name << "because of " << reason << std::endl;
    }

}


const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Grade can't be higher than 1");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return ("Grade can't be lower than 150");
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& src){
    stream<< src.getName() << ", bureaucrat grade " << src.getGrade();
    return (stream);
}