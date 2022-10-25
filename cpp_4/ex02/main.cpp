/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:34:24 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/25 11:21:21 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aanimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
//#include "WrongCat.hpp"

int main(){
    //const Aanimal* j = new Aanimal();
    Aanimal* x = new Dog();
    x->makeSound();
    Dog d;
    d.makeSound();

}