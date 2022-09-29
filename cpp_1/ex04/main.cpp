/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:53:08 by cyalniz           #+#    #+#             */
/*   Updated: 2022/09/29 19:53:09 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <string.h>



void    ft_copy(std::string file_name, std::string s1, std::string s2)
{
    (void)s1;
    (void)s2;
    std::fstream my_file;
    //my_file.open(file_name, std::ios::in);
    my_file.open(file_name.c_str());
    //my_file<<s1<<"\n"<<s2<<std::endl;
    std::ofstream new_file;
    new_file.open(file_name+"_new_file");
    std::string line;
    while(!my_file.eof())
    {
        
        getline(my_file, line);
        new_file<<line<<std::endl;

    }

/*     while(my_file>>line)
    {
        //std::cout<<line;
        iss.clear();
        iss.str(line);
        while(iss.good()){
            iss>>word;
            if(!word.compare(s1))
                new_file<<s2;
            else if(!word.compare(" "))
                new_file<<" ";
            else
                new_file<<line;

        }
    } */
    std::string a = "merhaba";
    std::cout<<a.c_str(3);

    new_file.close();
    my_file.close();

    
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string file_name;
        std::string s1;
        std::string s2;

        file_name = av[1];
        s1 = av[2];
        s2 = av[3];

        ft_copy(file_name, s1, s2);
    }
    else
        std::cout<< "arguments count must be 4. 1= filename, 2= first string, 3= second string"<<std::endl;
    std::string a = "merhaba";
    std::cout<<a.

}
