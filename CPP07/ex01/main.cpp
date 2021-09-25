#include "iter.hpp"

template <typename T>
void    print(T &a)
{
    std::cout << a << std::endl;
}

int main()
{
    std::string tab[10] = {"hello", "test", "for", "nothing", "just", "to", "test", "the", "function", "iter"};

    iter(tab, 10, &print);
}