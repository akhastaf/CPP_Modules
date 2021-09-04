#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <ostream>
#include <cmath>
class Fixed
{
private:
    int _value;
    static const int _fbit;
public:
    Fixed();
    Fixed(Fixed const & src);
    Fixed(int const value);
    Fixed(float const value);
    ~Fixed();

    Fixed & operator= (Fixed const & src);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    int toInt( void ) const;
    float toFloat( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & a);


#endif