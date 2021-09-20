#ifndef SCALAR_HPP
# define SCALAR_HPP
# include <iostream>

class Scalar
{
    private:
        std::string const _value;
        Scalar(){};
    public:
        Scalar(std::string value) : _value(value){};
        Scalar(Scalar const & src);
        ~Scalar(){};
        Scalar & operator=(Scalar const & src);
        std::string getValue() const;
        char toChar();
        
        class NonDisplayableException : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return "Non displayable";
            }
        };
        class ImpossibleException : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return ": impossible";
            }
        };
};

std::ofstream & operator<<(std::ofstream & o, Scalar const & src);

#endif