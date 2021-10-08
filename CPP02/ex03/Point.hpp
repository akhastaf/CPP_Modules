#ifndef POINT_HPP
# define POINT_HPP
# include <iostream>
# include <cmath>
# include <ostream>
# include "Fixed.hpp"


class Point
{
    private:
        Fixed const _x;
        Fixed const _y;
    public:
        Point();
        Point(Point const & src);
        Point(float const x, float const y);
        ~Point();
        Point & operator= (Point const & src);
        bool operator== (Point const & src);
        Fixed const & getX() const;
        Fixed const & getY() const;
        Fixed distance(Point const & a);
};

std::ostream & operator<< (std::ostream & o, Point const & a); 
bool bsp( Point & a, Point & b, Point & c, Point & point);


#endif