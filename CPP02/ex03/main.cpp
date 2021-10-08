# include "Point.hpp"

int main( void )
{
    Point a;
    Point b(3.7, 5.2);
    Point c(9.45, 15.2);
    Point x(0, 0);
    
    // std::cout << "A" << a << " B" << b << " C" << c << " X" << x << std::endl;
    if (bsp(a, b, c, x))
        std::cout << "the point " << x << " is inside of the traingle A" << a << " B" << b << " C" << c << std::endl;
    else
        std::cout << "the point " << x << " is not inside of the traingle A" << a << " B" << b << " C" << c << std::endl;
}