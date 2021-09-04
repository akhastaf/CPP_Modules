#include "Replace.hpp"

int     main(int ac, char **av)
{
    std::string file;
    std::string s1;
    std::string s2;
    std::string& rfile = file;
    std::string& rs1 = s1;
    std::string& rs2 = s2;

    if (ac != 4)
    {
        std::cout << "Error : missing argumenst" << std::endl; 
        return (1);
    }
    file = av[1];
    s1 = av[2];
    s2 = av[3];
    Replace r(rfile, rs1, rs2);
    try 
    {
        r.replaceall();
    }
    catch (std::string& e)
    {
        std::cout << e << std::endl;
    }
    return (0);
}