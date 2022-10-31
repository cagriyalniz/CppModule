/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:01:35 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/31 17:15:49 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 25, 5), _target(""){
    std::cout<<"Consturcter calling for ShrubberyCreationForm"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 25, 5) {
    _target = target;
    std::cout<<"Consturcter with paramether calling for ShrubberyCreationForm"<<std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout<<"Deconsturacter calling for ShrubberyCreationForm"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src){
    std::cout<<"ShrubberyCreationForm copy constructer"<<std::endl;
    this->_target = src._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src){
    std::cout<<"ShrubberyCreationForm copy assignment operator called"<<std::endl;
    if (this != &src)
        this->_target = src._target;
    return (*this);
}

std::string ShrubberyCreationForm::getTarget(){
    return this->_target;
}

void ShrubberyCreationForm::setTarget(std::string target){
    this->_target = target;
}

void ShrubberyCreationForm::execute(const Bureaucrat& exe) const{
    std::fstream file;
    std::string fileName;

    if (!(this->getIsSigned()))
        throw NotSignedException();
    else if (exe.getGrade() > this->getGradeExecute())
        throw GradeTooLowException();
    
    fileName = this->_target + "_shrubbery";
    file.open(fileName.c_str(), std::ios::out);
    if(file.is_open()){
        file << "       _-_       " << std::endl
			 << "    /~~ .  ~~\\    " << std::endl
			 << " /~~.  ' '  .~~\\ " << std::endl
			 << "{     *   *     }" << std::endl
			 << " \\  _-     -_  / " << std::endl
			 << "   ~  \\ //  ~   " << std::endl
			 << "_- -   | | _- _  " << std::endl
			 << "  _ -  | |   -_  " << std::endl
			 << "      // \\      " << std::endl;
		file.close();
	}
}
