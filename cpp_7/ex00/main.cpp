#include "whatever.hpp"

int main(){
/*     int a = 3;
    int b = 2;
    swap(a, b);
    std::cout<<"a: "<<a<<" b: "<<b<<std::endl;

    std::string c = "cagri1";
    std::string y = "cagri2";
    swap(c, y);
    std::cout<<"c: "<<c<<" y: "<<y<<std::endl;
    
    int min_val = min(a, b);
    std::cout<<"min: "<< min_val<<std::endl;

    
    std::cout<<"max: "<< max(c, y)<<std::endl; */

int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

}