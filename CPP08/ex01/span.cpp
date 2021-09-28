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

int Span::operator[] (int i)
{
    if (i < 0 || i > (int)this->_n)
        throw Span::OutOfRangeException();
    return this->_values[i];
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
        throw Span::FullException();
    this->_values.push_back(n);
}

void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (this->_n < this->_values.size() + std::distance(begin, end))
        throw FullException();
    this->_values.insert(this->_values.end(), begin, end);
}

int Span::shortestSpan()
{
    if (this->_values.size() <= 1)
        throw Span::NoSpanException();
    std::vector<int> copy(this->_values);
    std::sort(copy.begin(), copy.end());
    std::vector<int>::iterator min = copy.begin();
    std::vector<int>::iterator nextmin = copy.begin();
    nextmin++;
    int minvalue = *nextmin - *min;
    while (nextmin != copy.end())
    {
        if (minvalue > *nextmin - *min)
            minvalue = *nextmin - *min;
        min = nextmin;
        nextmin++;
    }
    return minvalue;
}

int Span::longestSpan()
{
    if (this->_values.size() <= 1)
        throw Span::NoSpanException();
    std::vector<int> copy(this->_values);
    std::sort(copy.begin(), copy.end());
    int min = copy.front();
    int nextMin = copy.back();
    return  nextMin - min;
}