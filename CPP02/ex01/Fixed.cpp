#include "Fixed.hpp"

const int Fixed::_fbit = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = value << Fixed::_fbit;
}

Fixed::Fixed(float const value)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = (int)(roundf(value * (1 << Fixed::_fbit)));
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator= (Fixed const & src)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_value = src.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    return this->_value;
}

void Fixed::setRawBits( int const raw )
{
    this->_value = raw;
}

int Fixed::toInt( void ) const
{
    return this->_value >> Fixed::_fbit;
}

float Fixed::toFloat( void ) const
{
    return (this->_value / (float)(1 << Fixed::_fbit));
}

std::ostream & operator<<(std::ostream & o, Fixed const & a)
{
    o << a.toFloat();
    return o;
}