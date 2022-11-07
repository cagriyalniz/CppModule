#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template< typename T >
void elmntsOfArr(T &ar, int i){
    std::cout<<"ar["<<i<<"]: "<<ar<<std::endl;

}

template< typename T >
void iter(T *ar, size_t len, void (*f)(T &, int i)){
    size_t j = 0;
    while(j < len){
        f(ar[j], j);
        j++;
    }
}

#endif