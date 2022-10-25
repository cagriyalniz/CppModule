/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:27:23 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/25 13:54:20 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b("cagri", 123);
    std::cout<<b.getName() << " " << b.getGrade()<<std::endl;

    b.operator++();
    std::cout<<b.getName() << " " << b.getGrade()<<std::endl;

    
}