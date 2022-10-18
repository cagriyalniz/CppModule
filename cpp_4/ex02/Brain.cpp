/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:27:19 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/13 17:54:08 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    this->ideas = new std::string[100];
    int i = 0;
    while(i++ < 10){
        this->ideas[i] = "myBrainnn";
    }
    std::cout<<"Constructer calling from Brain class"<<std::endl;
}

Brain::~Brain(){
    delete [] (this->ideas);
    std::cout<<"Deconstructer calling from Brain class"<<std::endl;
}

/* Brain::Brain(Brain const &src){
    std::string 
    std::cout<<"Brain Copy constructer called"<<std::endl;
    *this = src;
} */

Brain &Brain::operator=(Brain const &src){
    std::cout<< "Brain Copy assignment operator called"<<std::endl;
    int i = 0;
    while(i++ < 100){
        this->ideas[i] = src.ideas[i];
    }
    return (*this);
}

std::string *Brain::getIdeas(){
    return (this->ideas);
}