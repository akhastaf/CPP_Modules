#include "Point.hpp"

Fixed calc_area(Fixed const & a, Fixed const & b, Fixed const & c)
{
    std::cout << "in calc_area function : A" << a << " B" << b << " C" << c  << std::endl;
    Fixed area;
    Fixed s = Fixed(((Fixed)a + (Fixed)b + (Fixed)c).toFloat() / (float)2.0);
    area = sqrtf(s.toFloat() * (s - a).toFloat() * (s - b).toFloat() * (s - c).toFloat());
    return area;
}

bool bsp( Point const & a, Point const & b, Point const & c, Point const & point)
{
    Fixed a1;
    Fixed b1;
    Fixed c1;
    Fixed area;
    Fixed d, e, f;
    Fixed A, B, C;
    std::cout << "in bsp function : A" << a << " B" << b << " C" << c << " Point" << point << std::endl;
    a1 = ((Point)a).distance(b);
    b1 = ((Point)b).distance(c);
    c1 = ((Point)c).distance(a);
    area = calc_area(a1, b1, c1);
    d = ((Point)point).distance(a);
    e = ((Point)point).distance(b);
    f = ((Point)point).distance(c);
    A = calc_area(d, a1, e);
    B = calc_area(e, b1, f);
    C = calc_area(f, c1, d);
    std::cout << A << " " << B << " " << C << " " << area << std::endl;
    if (A == 0 || B == 0 || C == 0)
        return false;
    if (area == A + B + C)
        return true;
    return false;
}