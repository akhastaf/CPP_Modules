#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
#include <iterator>

class NotFoundException : public std::exception
{
    public:
    virtual const char * what() const throw()
    {
        return "Not found";
    }
};

template <class T>
typename T::iterator  easyfind(T &c, int s)
{
    typename T::iterator it;
    it = std::find(c.begin(), c.end(), s);
    if (it == c.end())
        throw NotFoundException();
    return it;
}

#endif