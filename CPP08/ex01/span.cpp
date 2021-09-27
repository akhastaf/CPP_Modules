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

std::vector<int> const & Span::getValues() const
{
    return this->_values;
}

void    Span::addNumber(int n)
{
    if (this->_n < this->_values.size())            
        throw Span::OutOfRangeException();
    this->_values.push_back(n);
}

void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (this->_n < this->_values.size() + std::distance(begin, end))
        throw OutOfRangeException();
    this->_values.insert(this->_values.end(), begin, end);
}

int Span::shortestSpan()
{
    std::vector<int> copy(this->_values);
    std::sort(copy.begin(), copy.end());
    std::vector<int>::iterator min = copy.begin();
    std::vector<int>::iterator nextmin = copy.begin();
    nextmin++;
    return *nextmin - *min;
}

int Span::longestSpan()
{
    std::vector<int> copy(this->_values);
    std::sort(copy.begin(), copy.end());
    std::vector<int>::iterator max = copy.end();
    std::vector<int>::iterator prevmax = copy.end();
    prevmax--;
    prevmax--;
    max--;
    std::cout << *prevmax << " " << *max << std::endl;
    return  *max - *prevmax;
}