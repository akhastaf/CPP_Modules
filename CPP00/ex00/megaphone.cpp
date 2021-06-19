#include <iostream>

int     main(int ac, char **av)
{
    int i;
    int j;

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    i = 0;
    while (++i < ac)
    {
        j = -1;
        while (av[i][++j]) 
            std::cout << (char)(std::toupper(av[i][j]));
        if (i < ac)
            std::cout << " ";
    }
    std::cout << std::endl;
    return (0);
}