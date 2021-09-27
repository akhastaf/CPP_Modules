#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iterator>

int     main()
{
    std::list<int> t;

    t.push_back(10);
    t.push_back(154);
    t.push_back(112);
    t.push_back(187);
    t.push_back(35);
    t.push_back(0);
    t.push_back(198);
    std::list<int>::iterator it;
    try
    {
        it = easyfind(t, 200);
        std::cout << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


    return 0;
}