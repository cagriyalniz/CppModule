#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <iostream>
#include <cctype>

class Rectangle{
    public:
        float m_length;
        float m_width;
    
    public:
        Rectangle(){}
        virtual ~Rectangle(){}//destructor



/*         float Area();
        float ScaledArea(const float scale); */

        float Area(){
            return m_length*m_width;
        }   
        float ScaledArea(const float scale){
            return scale*scale;
        }

};

class Square:public Rectangle{
    public:
        Square(){}
        virtual ~Square(){}

        int Alan(){
            return m_length*m_width;
        }

};


class Cokgen{
    public:
        Cokgen(int a){};
        virtual ~Cokgen(int a){};
    
        int Deger(){
            return a;
        }

};

class Ucgen::public Cokgen{
    public:
        Ucgen(){}
        virtual ~Ucgen(){}
        
};





#endif