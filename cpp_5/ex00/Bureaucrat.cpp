/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:27:10 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/31 11:58:53 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout<<"Constructer calling from Bureaucrat class"<<std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
    std::cout<<"Parameter Constructer calling from Bureaucrat class"<<std::endl;
    //throwlar gelecek buraya
/*     try{
        if (grade < 1){
            throw std::runtime_error("less");
        }
        else if (grade > 150){
            throw std::runtime_error("more");
        }
    }
    catch(const std::exception& err){
        std::cout<<"error: "<<err.what()<<std::endl;
        return ;
    } */
    if (grade < 1)
        throw GradeTooLowException();
    else if (grade > 150)
        throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat(){
    std::cout<<"Deconstructer calling from Bureaucrat class"<<std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src.getName()), _grade(src.getGrade()){
    std::cout<<"Bureaucrat copy constructer"<<std::endl;
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src){
    std::cout<<"Bureaucrat copy assignment operator called"<<std::endl;
    if (this != &src)
    this->_grade = src._grade;
    
    return(*this);
}

Bureaucrat Bureaucrat::operator ++ (){
    this->_grade++;
    return (*this);
}

Bureaucrat Bureaucrat::operator -- (){
    this->_grade--;
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

void Bureaucrat::incGrade(){
    if (this->getGrade() - 1 < 1)
        throw GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decGrade(){
    if(this->getGrade() + 1 > 150)
        throw GradeTooLowException();
    this->_grade++;
}

void Bureaucrat::incBureac(int i){
/*     try{
        if (this->getGrade() - 1 < 1){
            throw std::runtime_error("less");
        }
    }
    catch(const std::exception& err){
        std::cout<<"error: "<<err.what()<<std::endl;
        return ;
    } */
/*     if (this->getGrade() - 1 < 1)
        GradeTooLowException();
    else
        this->setGrade(this->getGrade() - 1); */
    
    if (this->getGrade() - i <  1)
        throw GradeTooLowException();
    else
        this->_grade -= i;
}

void Bureaucrat::decBureac(int d){
/*     try{
        if (this->getGrade() + 1 > 150){
            throw std::runtime_error("more");
        }
    }
    catch(const std::exception& err){
        std::cout<<"error: "<<err.what()<<std::endl;
        return ;
    } */
    if (this->getGrade() + d > 150)
        throw GradeTooHighException();
    else
        this->_grade += d;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return ("GradeTooHighException: The grade can't be higher than 1!!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return ("GradeTooLowException: The grade can't be lower than 150!"); 
}
