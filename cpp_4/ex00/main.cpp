/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:34:24 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/13 17:32:24 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(){
    const Animal* meta = new Animal();
    //Constructor calling from Animal class
    meta->makeSound();
    
    //
    const Animal* j = new Dog();
/*  Constructor calling from Animal class
    Constructer calling from Dog class */
    j->makeSound(); //eger animal classındaki makesound virtual olmasaydi ses çikarmayacakti
//  Dog: hav hav
    Dog* d = new Dog();
/*  Constructor calling from Animal class
    Constructer calling from Dog class */
    d->makeSound();
//    Dog: hav hav

    Animal anm;
    //constructor calling from Animal class
    anm.makeSound();
    //
    Dog dg;
/*     Constructor calling from Animal class
    Constructer calling from Dog class */
    dg.makeSound();

/*     Dog: hav hav
    Deconstructer calling from Dog class
    Deconstructer calling from Animal class
    Deconstructer calling from Animal class */

    const Animal* i = new Cat();
    std::cout<< j->getType() << " "<<std::endl;
    std::cout<< i->getType() << " "<<std::endl;
    i->makeSound();
    j->makeSound();

    meta->makeSound();

    WrongAnimal *wa = new WrongCat();
    wa->makeSound();
    WrongCat *wc = new WrongCat();
    wc->makeSound();
    delete(meta);
    delete(j);
    delete(i);

    
    
}