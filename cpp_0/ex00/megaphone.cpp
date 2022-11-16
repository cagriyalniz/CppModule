/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:12:28 by cyalniz           #+#    #+#             */
/*   Updated: 2022/10/04 17:12:31 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>


int main(int ac, char **av)
{
    int     i;
    int     j;
    char    ch;
    
    i = 0;
    j = 1;
    ch = 0;
    if(ac > 1)
    {
        while(av[j])
        {
            i = 0;
            while(av[j][i])
            {
                if(islower(av[j][i]))
                {
                    ch = toupper(av[j][i]);
                }
                else
                    ch = av[j][i];
                std::cout << ch;
                i++;
            }
            j++;
            if(j < ac)
                std::cout<<" ";
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    std::cout<<"\n";
}

