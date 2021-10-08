#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(Point const & src) 
{
    (Fixed)this->_x = src.getX();
    (Fixed)this->_y = src.getY();
    *this = src;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
}

Point & Point::operator= (Point const & src)
{
    (Fixed)this->_x = src.getX();
    (Fixed)this->_y = src.getY();
    return *this;
}

bool Point::operator== (Point const & src)
{
    if ((Fixed)this->_x == (Fixed)src.getX() && (Fixed)this->_y == (Fixed)src.getY())
        return true;
    return false;
}

Fixed const &   Point::getX() const
{
    return this->_x;
}

Fixed  const &  Point::getY() const
{

    std::cout << "Y : " << this->_y << std::endl;
    return this->_y;
}


Point::~Point()
{
}

Fixed Point::distance(Point const & a)
{
    float d;
    d = sqrtf(powf(this->getX().toFloat() - a.getX().toFloat(), 2.0) + powf(this->getY().toFloat() - a.getY().toFloat(), 2.0));
    return Fixed(d);
}

std::ostream & operator<<(std::ostream & o, Point const & a)
{
    o << "(" << a.getX() << ", " << a.getY() << ")";
    return o;
}