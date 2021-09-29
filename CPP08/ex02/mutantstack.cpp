#include "mutantstack.hpp"
template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & src)
{
    *this = src;
}

template <typename T>
MutantStack<T>::MutantStack(std::stack<T> const & src) : std::stack<T>(src)
{
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const & src)
{
    this->c = src.c;
}