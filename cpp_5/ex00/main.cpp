/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:27:23 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/28 12:11:20 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    /* Bureaucrat b("cagri", 123);
    std::cout<<b.getName() << " " << b.getGrade()<<std::endl;

    b.operator++();
    std::cout<<b.getName() << " " << b.getGrade()<<std::endl;
 */
    //Bureaucrat h("hh", 11);
    try{

        //Bureaucrat x("x", 151);
        //Bureaucrat y("y", -12);
        Bureaucrat t("t", 150);
        t.incBureac(151);
        t.decBureac(4);
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }
/*     Bureaucrat c("cagri", 140);
    std::cout<<c.getGrade()<<std::endl;
    c.decBureac(22);
    std::cout<<c.getGrade()<<std::endl; */
/*     Bureaucrat x("yaln", 1);
    std::cout<<x.getGrade()<<std::endl;
    x.incBureac();
    std::cout<<x.getGrade()<<std::endl; */
/*  Bureaucrat d(c);
    std::cout<<d.getName()<<std::endl;
    std::cout<<d.getGrade()<<std::endl;
    d.incBureac();
    std::cout<<d.getGrade()<<std::endl; */
}