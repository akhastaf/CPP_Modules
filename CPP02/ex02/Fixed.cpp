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

bool Fixed::operator> (Fixed const & src)
{
    if (this->_value > src.getRawBits())
        return true;
    return false;
}

bool Fixed::operator< (Fixed const & src)
{
    if (this->_value < src.getRawBits())
        return true;
    return false;
}

bool Fixed::operator>= (Fixed const & src)
{
    if (this->_value >= src.getRawBits())
        return true;
    return false;
}

bool Fixed::operator<= (Fixed const & src)
{
    if (this->_value <= src.getRawBits())
        return true;
    return false;
}

bool Fixed::operator== (Fixed const & src)
{
    if (this->_value == src.getRawBits())
        return true;
    return false;
}

bool Fixed::operator!= (Fixed const & src)
{
    if (this->_value != src.getRawBits())
        return true;
    return false;
}

Fixed Fixed::operator+ (Fixed const & src)
{
   return Fixed(this->toFloat() + src.toFloat());
}

Fixed Fixed::operator- (Fixed const & src)
{
   return Fixed(this->toFloat() - src.toFloat());
}

Fixed Fixed::operator* (Fixed const & src)
{
   return Fixed(this->toFloat() * src.toFloat());
}

Fixed Fixed::operator/ (Fixed const & src)
{
    return Fixed(this->toFloat() / src.toFloat());
}

Fixed & Fixed::operator++()
{
    this->_value++;
    return *this;
}

Fixed Fixed::operator++ (int)
{
    Fixed tmp = *this;
    ++(*this);
    return tmp;
}

Fixed & Fixed::operator--()
{
    this->_value--;
    return *this;
}

Fixed Fixed::operator-- (int)
{
    Fixed tmp = *this;
    --(*this);
    return tmp;
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
    return (int)(this->_value >> Fixed::_fbit);
}

float Fixed::toFloat( void ) const
{
    return (float)(this->_value / (float)(1 << Fixed::_fbit));
}

Fixed & Fixed::min(Fixed & x, Fixed & y)
{
    if (x < y)
        return x;
    return y;
}

Fixed const & Fixed::min(Fixed const & x, Fixed const & y)
{
    if (x.getRawBits() < y.getRawBits())
        return x;
    return y;
}

Fixed & Fixed::max(Fixed & x, Fixed & y)
{
    if (x < y)
        return y;
    return x;
}

Fixed const & Fixed::max(Fixed const & x, Fixed const & y)
{
    if (x.getRawBits() < y.getRawBits())
        return y;
    return x;
}

std::ostream & operator<<(std::ostream & o, Fixed const & a)
{
    o << a.toFloat();
    return o;
}