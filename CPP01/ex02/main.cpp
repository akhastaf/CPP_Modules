#include <iostream>

int     main()
{
    std::string myString = "HI THIS IS BRAIN";
    std::string *stringPTR;
    std::string& stringREF = myString;

    stringPTR = &myString;

    std::cout << "the address of the string " << &myString << std::endl;
    std::cout << "the address of the string by using the PTR " << stringPTR << std::endl;
    std::cout << "the address of the string by using the REF " << &stringREF << std::endl;
    
    std::cout << "the string by PTR : " << *stringPTR << std::endl;
    std::cout << "the string by REF : " << stringREF << std::endl; 
    return 0;
}