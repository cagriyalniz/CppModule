/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:27:10 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/25 13:53:43 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout<<"Constructer calling from Bureaucrat class"<<std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
    //throwlar gelecek buraya
}

Bureaucrat::~Bureaucrat(){
    std::cout<<"Deconstructer calling from Bureaucrat class"<<std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src){
    std::cout<<"Bureaucrat copy constructer"<<std::endl;
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src){
    std::cout<<"Bureaucrat copy assignment operator called"<<std::endl;
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

int Bureaucrat::getGrade(){
    return this->_grade;
}

void Bureaucrat::setGrade(int grade){
    this->_grade = grade;
}