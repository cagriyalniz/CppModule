/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:27:23 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/26 10:33:25 by cyalniz          ###   ########.fr       */
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
    Bureaucrat c("cagri", 150);
    std::cout<<c.getGrade()<<std::endl;
    c.decBureac();
    std::cout<<c.getGrade()<<std::endl;
    Bureaucrat x("yaln", 1);
    std::cout<<x.getGrade()<<std::endl;
    x.incBureac();
    std::cout<<x.getGrade()<<std::endl;
/*     Bureaucrat d(c);
    std::cout<<d.getName()<<std::endl;
    std::cout<<d.getGrade()<<std::endl;
    d.incBureac();
    std::cout<<d.getGrade()<<std::endl; */
}