#include <iostream>
#include <string>


class Super_c{
    public:
        
        Super_c(){
            std::cout<<"super_c\n";
        }

};

class Sub_c: public Super_c{
    public:
        Sub_c():Super_c(){
            std::cout<<"sub_c\n";
        }

};

class Super_a{
    public:
        int nmbr;
        Super_a(int nmbr){
            this->nmbr = nmbr;
            std::cout<<"super_a\n";
        }
        Super_a(){

        }

        int get_nmbr(){
            return this->nmbr;
        }

        void set_nmbr(int nbr){
            this->nmbr = nbr;
        }
};

class Sub_a: public Super_a{
    public:
        Super_a t;
        Sub_a(Super_a t){
            this->t = t;
            std::cout<<"sub_a main\n";
        }
        Sub_a(int x):Super_a(x){
            std::cout<<"sub_a\n";
        }




};

int main()
{
/*     Sub_c sub;

    Sub_a suba(3);
    std::cout<<suba.get_nmbr(); */

    Sub_a sub_prm(20);
    std::cout<<sub_prm.t.get_nmbr() << "\n";
    sub_prm.t.set_nmbr(44);
    std::cout<<sub_prm.t.get_nmbr();

}
