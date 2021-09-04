#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <ostream>
# include <cmath>

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
    bool operator> (Fixed const & src);
    bool operator< (Fixed const & src);
    bool operator>= (Fixed const & src);
    bool operator<= (Fixed const & src);
    bool operator== (Fixed const & src);
    bool operator!= (Fixed const & src);
    Fixed operator+ (Fixed const & src);
    Fixed operator- (Fixed const & src);
    Fixed operator* (Fixed const & src);
    Fixed operator/ (Fixed const & src);
    // Fixed & operator++ ();
    // Fixed & operator++ (int);
    // Fixed & operator-- ();
    // Fixed & operator-- (int);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    int toInt( void ) const;
    float toFloat( void ) const;
    static Fixed & min(Fixed & x, Fixed & y);
    static Fixed & max(Fixed & x, Fixed & y);
    static Fixed const & min(Fixed const & x, Fixed const & y);
    static Fixed const & max(Fixed const & x, Fixed const & y);
};

std::ostream & operator<<(std::ostream & o, Fixed const & a);


#endif