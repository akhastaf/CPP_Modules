# include "Point.hpp"

int main( void )
{
    Point a;
    Point b(0, 10);
    Point c(20.5, 0);
    Point x(3, 3);
    
    // std::cout << "A" << a << " B" << b << " C" << c << " X" << x << std::endl;
    if (bsp(a, b, c, x))
        std::cout << "the point " << x << " is inside of the traingle A" << a << " B" << b << " C" << c << std::endl;
    else
        std::cout << "the point " << x << " is not inside of the traingle A" << a << " B" << b << " C" << c << std::endl;
}