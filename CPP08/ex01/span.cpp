#include "span.hpp"

Span::Span(Span const & src)
{
    *this = src;
}

Span & Span::operator= (Span const & src)
{
    if (this->_n != src.getN())
    {
        this->_values.clear();
        this->_n = src.getN();
        this->_values = src.getValues();
    }
    return *this;
}

unsigned int Span::getN() const
{
    return this->_n;
}

std::vector const & Span::getValues() const
{
    return this->_values;
}

void    Span::addNumber(int n)
{
    if (this->_n > this->_values.size())
        throw OutOfRangeException();
    this->_values.push_back(n);
}

void    Span::addNumber(std::vector::iterator begin, std::vector::iterator end)
{
    if (this->_n > this->_values.size() + std::distance(begin, end))
        throw OutOfRangeException();
    this->_values.insert(begin, end);
}

int Span::shortestSpan()
{
    std::vector copy(this->_values);
    std::sort(copy.begin(), copy.end());
    int min = *(copy.begin());
    int nextmin = *(copy.begin()++);
    return nextmin - min;
}