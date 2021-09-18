#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bob("bob", 200);
  
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    


    return 0;
}