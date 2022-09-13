#include <iostream>
#include <string>

int main()
{
    std::string     my_text;
    std::string*    stringPTR;
    std::string&    stringRef = my_text;;

    my_text =  "HI THIS IS BRAIN";
    stringPTR = &my_text;
   

    std::cout << "string memory addres: " << &my_text 
    << std::endl;
    std::cout << "pointer memory addres: " << &stringPTR
    << std::endl;
    std::cout << "referance memory addres: " << &stringRef
    << "\n" << std::endl;

    std::cout << "my text: " << my_text << std::endl;
    std::cout << "pointer content: " << stringPTR << std::endl;
    std::cout << "referance content: " << stringRef << std::endl;
}