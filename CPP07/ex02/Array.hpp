#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <class T>
class Array
{
    private:
        T *_t;
        unsigned int _n;
    public:
        Array(): _t(new T[0]), _n(0) {}
        Array(unsigned int n) : _t(new T[n]), _n(n) {}
        Array(Array const & src)
        {
            *this = src;
        }
        ~Array(){}
        Array & operator=(Array const & src)
        {
            if (this->_n != src.size())
            {
                this->_n = src.size();
                this->_t = new T[this->_n];
            }
            for (unsigned int i = 0; i < this->_n; i++)
                this->_t[i] = src[i];
            return *this;
        }

        T& operator[](int i)
        {
            if (i < 0 || i >= (int)this->_n)
                throw Array::OutOfLimitException();
            return this->_t[i];
        }

        const T& operator[](int i) const
        {
            if (i < 0 || i >= (int)this->_n)
                throw Array::OutOfLimitException();
            return this->_t[i];
        }

        unsigned int size() const 
        {
            return this->_n;
        };

        class OutOfLimitException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Out of limit exception";
                }
        };     
};

template <typename T>
std::ostream & operator<< (std::ostream & o, Array<T> src)
{
    for (unsigned int i = 0; i < src.size(); i++)
    {
        try
        {
            o << src[i] << " ";
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return o;
}
#endif