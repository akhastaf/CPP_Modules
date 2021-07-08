#include <iostream>
#include <string>
#include <fstream>

int     main(int ac, char **av)
{
    std::ofstream original;
    std::ifstream replace;
    std::string s1;
    std::string s2;

    if (ac != 4)
    {
        std::cout << "Error : missing argumenst" << std::endl; 
        return (1);
    }
    s1 = av[2];
    s2 = av[3];
    if (s1.empty() || s2.empty())
    {
        std::cout << "Error : one of the strings is empty" << std::endl; 
        return (2);
    }
    

    return (0);
}