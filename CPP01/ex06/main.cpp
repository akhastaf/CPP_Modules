#include "Karen.hpp"

int main(int ac, char **av)
{
    Karen k;
    std::string level;
    
    if (ac >= 2)
    {
        level = av[1];
        k.complain(level);
    }
    return 0;
}