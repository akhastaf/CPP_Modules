#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
    int _value;
    static const int _fbit;

    public:
    Fixed();
    Fixed(Fixed const & src);
    ~ Fixed();
    Fixed & operator= (Fixed const & src);
    int getRawBits( void ) const;
    void setRawBits( int const raw );

};
#endif