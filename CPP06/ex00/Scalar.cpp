#include "Scalar.hpp"

Scalar::Scalar(Scalar const & src)
{
    *this = src;
}

Scalar & Scalar::operator=(Scalar const & src)
{
    (std::string)this->_value =  src.getValue();
}

std::string Scalar::getValue() const
{
    return this->_value
}

char Scalar::toChar()
{

}

int Scalar::toInt()
{}

float Scalar::toFloat()
{}

double Scalar::toDouble()
{}

std::ofstream & operator<<(std::ofstream & o, Scalar const & src)
{
    std::cout "char : ";
    try
    {
        std::cout << src.toChar() std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what(); << std::endl;
    }
    std::cout "int : ";
    try
    {
        std::cout << src.toInt() std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what(); << std::endl;
    }
    std::cout "float : ";
    try
    {
        std::cout << src.toFloat() std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what(); << std::endl;
    }
    std::cout "double : ";
    try
    {
        std::cout << src.toDouble() std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what(); << std::endl;
    }
}