#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <iterator>

class Span {
    private:
    std::vector<int> _values;
    unsigned int _n;
    Span(){};

    public:
    Span(int n) : _n(n){};
    ~Span(){};
    Span(Span const & src);
    Span & operator= (Span const & src);
    unsigned int getN() const;
    std::vector<int> const & getValues() const;
    void    addNumber(int n);
    void    addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();

    class OutOfRangeException : public std::exception
    {
        public:
        virtual const char * what() const throw()
        {
            return "out of range";
        }
    };
};



#endif