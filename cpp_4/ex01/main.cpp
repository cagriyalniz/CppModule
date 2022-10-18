/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:34:24 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/13 20:58:34 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
//#include "WrongCat.hpp"

int main(){
    const Animal* j = new Dog();

    j->makeSound();
    //j = new Cat();
    j->makeSound();
    delete(j);

/*     int i = 0;
    const Animal *(k[10]);
    while(i < 9){
        if(i%2 == 0){
            
            k[i] = new Cat();
        }
        else{
        
            k[i] = new Dog();
        }
        k[i]->makeSound();
        i++;
    }
    i = 0;
    while(i < 9){
        delete(k[i]);
        i++;
    }
    while(1); */
    
}