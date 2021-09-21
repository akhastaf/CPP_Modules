#include "Scalar.hpp"

int main(int ac, char **av)
{
    std::string value;
    if (ac == 2)
    {
        value = av[1];
        Scalar s(value);
        std::cout << s << std::endl;
    }
    return 0;
}