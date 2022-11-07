#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template< typename T >

class Array{
    public:
        T *ar;
        unsigned int _size;
        
        Array():_size(2){
        this->ar = new T[this->_size];
        }//Secondly, those definitions cannot be put in a .cpp file, because the compiler won't be able to instantiated them implicitly from their point of invocation. 
        //Creates an empty array.
        Array(unsigned int n):_size(n){
            this->ar = new T[n];
        }
        // Creates an array of n elements initialized by default.
        ~Array(){
            if(this->ar != NULL)
                delete[] this->ar;
        }

        Array(const Array &src): _size(src.size()){
            this->ar = NULL;
            *this = src;
        }

        

        Array &operator=(const Array &src){
            if (this->ar != NULL)
                delete[] this->ar;
            if (src.size() != 0){
                this->_size =src.size();
                this->ar = new T[this->size];
                int i = 0;
                while(i < this->size()){
                    this->ar[i] = src.ar[i];
                    i++;
                }
            }
            return (*this);
        }

    T &operator[](unsigned int index){
        if(index >= this->_size || this->ar == NULL || index < 0){
            std::cout<<"index: " <<index<<std::endl;
            throw Array::InvalidException();
        }
        return (this->ar[index]);
    }

    const T &operator[](unsigned int index) const{
        if(index >= this->_size || this->ar == NULL || index < 0){
            std::cout<<"index: " <<index<<std::endl;
            throw Array::InvalidException();
        }
        return (this->ar[index]);
    }
    public:

        class InvalidException: public std::exception{
                public:
                    virtual const char	*what() const throw(){
                        return "Invidalid index: index is either bigger than size or less than 0";
                    }
        };

    size_t size() const{
        return (this->_size);
    }


};

#endif