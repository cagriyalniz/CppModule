#include "Array.hpp"
#include "MyClass.hpp"
int main(){
    Array<int> nbr(4);
    for(int i = 0; i < 4; i++)
        nbr[i] = i*2;
    for(int i = 0; i < 4; i++)
        std::cout<<nbr[i]<<std::endl;
    
    Array <std::string> cgr(2);
    cgr[0] = "cagri";
    cgr[1] = "yalniz";
    for(unsigned int j = 0; j < cgr._size; j++){
    try {
		std::cout << cgr[j] << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
    }

    try {
		std::cout << nbr[15] << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}


/*     Array<MyClass> hehe(2);
    for(int k = 0; k < 4; k++)
        hehe[k]._age = k*2;
    for(unsigned int j = 0; j < hehe._size; j++){
    try {
		std::cout << hehe[j]._age << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
    } */
}