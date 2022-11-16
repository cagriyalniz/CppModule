/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:52:38 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/04 23:32:27 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>



void ptr(std::string* sPtr){
    std::cout<<"-----PTR FUNCTION START-----"<<std::endl;
    
    std::cout << "pointer content in ptr func: " << sPtr[0] << std::endl;
    std::cout << "pointer memory addres in func: " << &sPtr
    << std::endl;

    std::string n = "xyz";
    sPtr = &n;
    std::cout << "pointer content: " << sPtr[0] << std::endl;
    std::cout << "pointer memory addres in func: " << &sPtr
    << std::endl;

    std::cout<<"-----PTR FUNCTION START-----"<<std::endl;

}

void ref(std::string& sRef){
    std::cout<<"-----REF FUNCTION START-----"<<std::endl;

    std::cout << "referance content in ref func: " << sRef << std::endl;//degismedi
    std::cout << "referance memory addres in func: " << &sRef
    << std::endl;//degismedi

    sRef = "abc";
    std::cout << "referance content: " << sRef << std::endl;//degisti
    std::cout << "referance memory addres in func: " << &sRef//degismedi
    << std::endl;

    std::cout<<"-----REF FUNCTION END-----"<<std::endl;
}

void str(std::string sStr){
    std::cout<<"-----STR FUNCTION START-----"<<std::endl;

    std::cout << "str(my text) content in str func: " << sStr << std::endl;//degismedi
    std::cout << "my text memory addres in func: " << &sStr 
    << std::endl;//farkli

    sStr = "qwe";
    std::cout << "str(my text) content: " << sStr << std::endl;
    std::cout << "string(my text) memory addres in func: " << &sStr//degismedi 
    << std::endl;

    std::cout<<"-----STR FUNCTION END-----"<<std::endl;
}

int main()
{
    std::string     my_text;
    std::cout << "string memory addres: " << &my_text 
    << std::endl;
    std::string*    stringPTR;
    std::cout << "pointer memory addres: " << &stringPTR
    << std::endl;
    std::string&    stringRef = my_text;
    std::cout << "referance memory addres: " << &stringRef
    << "\n" << std::endl;

    my_text =  "HI THIS IS BRAIN";
    stringPTR = &my_text;
    std::cout<<"Text atamasi yapildi"<<std::endl;
    std::cout<<"\n";

    std::cout << "my text after text atamasi: " << my_text << std::endl;
    std::cout << "my text memory addres after text atamasi: " << &my_text 
    << std::endl;//degismedi
    
    std::cout << "pointer content after text atamasi: " << stringPTR[0] << std::endl;
    std::cout << "pointer memory addres after text atamasi: " << &stringPTR
    << std::endl;//degismedi
    
    std::cout << "referance content after text atamasi: " << stringRef << std::endl;
    std::cout << "referance memory addres after text atamasi: " << &stringRef
    << std::endl;//degismedi

    std::cout<<"\n";
    std::cout<<"\n";

    str(my_text);

    std::cout<<"\n";
    std::cout<<"\n";

    std::cout << "my text after str_func: " << my_text << std::endl;//degismedi
    std::cout << "my text memory addres after str_func: " << &my_text 
    << std::endl;//degismedi
    std::cout<<"\n";

    std::cout << "pointer content after str_func: " << stringPTR[0] << std::endl;//degismedi
    std::cout << "pointer memory addres after str_func: " << &stringPTR
    << std::endl;//degismedi
    std::cout<<"\n";

    std::cout << "referance content after str_func: " << stringRef << std::endl;//degismedi
    std::cout << "referance memory addres after str_func: " << &stringRef
    << std::endl;//degismedi

    std::cout<<"\n";
    std::cout<<"\n";

    ref(stringRef);

    std::cout<<"\n";
    std::cout<<"\n";

    std::cout << "my text after ref_func: " << my_text << std::endl;//degisti
    std::cout << "my text memory addres after ref_func: " << &my_text 
    << std::endl;//degismedi
    std::cout<<"\n";

    std::cout << "pointer content after ref_func: " << stringPTR[0] << std::endl;
    std::cout << "pointer memory addres after ref_func: " << &stringPTR
    << std::endl;//degismedi
    std::cout<<"\n";

    std::cout << "referance content after ref_func: " << stringRef << std::endl;
    std::cout << "referance memory addres after ref_func: " << &stringRef
    << std::endl;
    
    std::cout<<"\n";
    std::cout<<"\n";
    
    ptr(stringPTR);

    std::cout<<"\n";
    std::cout<<"\n";

    std::cout << "my text after ptr_func: " << my_text << std::endl;
    std::cout << "my text memory addres after ptr_func: " << &my_text 
    << std::endl;
    std::cout<<"\n";

   
    std::cout << "pointer content after ptr_func: " << stringPTR[0] << std::endl;
    std::cout << "pointer memory addres after ptr_func: " << &stringPTR
    << std::endl;
    std::cout<<"\n";

    
    std::cout << "referance content after ptr_func: " << stringRef << std::endl;
    std::cout << "referance memory addres after ptr_func: " << &stringRef
    << std::endl;
    
    std::cout<<"\n";
    std::cout<<"\n";


    std::cout << "my text: " << my_text << std::endl;
    std::cout << "pointer content: " << stringPTR[0] << std::endl;
    std::cout << "referance content: " << stringRef << std::endl;
}