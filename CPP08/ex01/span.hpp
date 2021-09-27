#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <iterator>
# include <vector>

class Span {
    private:
    std::vector<int> _values;
    unsigned int _n;
    Span(){};

    public:
    Span(int n) : _n(n){};
    Span(Span const & src);
    ~Span(){};
    Span & operator= (Span const & src);
    unsigned int getN() const;
    std::vector const & getValues() const;
    void    addNumber(int n);
    void    addNumber(std::vector::iterator begin, std::vector::iterator end);
    int shortestSpan();

    // int shortestSpan()
    // {
    //     std::vector copy(this->_values);
    //     std::sort(copy.begin(), copy.end());
    //     int min = *(copy.begin());
    //     int nextmin = *(copy.begin()++);
    //     return nextmin - min;
    // }

    class Span::OutOfRangeException : public std::exception
    {
        public:
        virtual const char * what() const throw()
        {
            return "out of range";
        }
    }
};



#endif