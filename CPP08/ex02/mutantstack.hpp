#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP
# include <iostream>
# include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
    public:
    MutantStack() : std::stack<T>() {};
    MutantStack(MutantStack<T> const & src);
    MutantStack(std::stack<T> const & src);
    ~MutantStack(){};
    MutantStack & operator=(MutantStack<T> const & src);
    typedef typename MutantStack<T>::stack::container_type::iterator iterator;
    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
    iterator rbegin()
    {
        return this->c.rbegin();
    }
    iterator rend()
    {
        return this->c.rend();
    }
};
#endif