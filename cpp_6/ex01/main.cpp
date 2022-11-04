
#include <iostream>
#include <stdint.h>

struct Data{
    int n;
};

uintptr_t serialize(Data *p){
    return reinterpret_cast<uintptr_t>(p);
}

Data* deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}

int main(){
    Data *d;
    uintptr_t rawData;
    Data* retData;

    d = new Data();

    std::cout<<"Data :" <<d<<std::endl;
    rawData = serialize(d);
    std::cout<<"Raw data: "<<rawData<<std::endl;
    retData = deserialize(rawData);
    std::cout<<"Deserialize data: "<<retData<<std::endl;

    delete d;
}