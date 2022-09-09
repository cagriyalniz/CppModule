#include <iostream>
#include <cctype>


int main(int ac, char **av)
{
    int     i;
    int     j;
    char    ch;
    
    i = 0;
    j = 1;
    if(ac > 1)
    {
        while(av[j])
        {
            while(av[j][i])
            {
                if(av[1][i] >= 'a' && av[1][i] <= 'z')
                {
                    ch = toupper(av[1][i]);
                }
                else
                    ch = av[1][i];
                std::cout << ch;
                i++;
            }
            j++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

}