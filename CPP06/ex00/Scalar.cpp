#include "Scalar.hpp"

Scalar::Scalar(Scalar const & src)
{
    *this = src;
}

Scalar & Scalar::operator=(Scalar const & src)
{
    (std::string)this->_value =  src.getValue();
    return *this;
}

std::string Scalar::getValue() const
{
    return this->_value;
}

char Scalar::toChar()
{
    char c;
    try 
    {
        c = std::stoi(this->_value);
        if (!std::isprint(c))
            throw Scalar::NonDisplayableException();
    }
    catch (Scalar::NonDisplayableException &e)
    {
        throw Scalar::NonDisplayableException();
    }
    catch (std::exception &e)
    {
        throw Scalar::ImpossibleException();
    }
    return c;
}

int Scalar::toInt()
{
    int a;
    try
    {
        a = std::stoi(this->_value);
    }
    catch (std::exception &e)
    {
        throw Scalar::ImpossibleException();
    }
    return a;
}

float Scalar::toFloat()
{
    float a;
    try
    {
        a = std::stof(this->_value);
    }
    catch (std::exception &e)
    {
        throw Scalar::ImpossibleException();
    }
    return a;
}

double Scalar::toDouble()
{
    double a;
    try
    {
        a = std::stod(this->_value);
    }
    catch (std::exception &e)
    {
        throw Scalar::ImpossibleException();
    }
    return a;
}

std::ostream & operator<<(std::ostream & o, Scalar & src)
{
    std::cout << "char : ";
    try
    {
        char c = src.toChar();
        std::cout << "'" << c << "'" << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "int : ";
    try
    {
        std::cout << src.toInt() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "float : ";
    try
    {
        float f = src.toFloat();
        std::cout << f;
        if (!std::isnan(f) && f - (int)f == 0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "double : ";
    try
    {
        std::cout << src.toDouble();
    }
    catch(std::exception &e)
    {
        std::cout << e.what();
    }
    return o;
}