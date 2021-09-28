#include "span.hpp"

int main()
{
    std::vector<int> other;
    other.push_back(10);
    other.push_back(20);
    other.push_back(30);
    other.push_back(40);
    other.push_back(50);
    other.push_back(60);
    other.push_back(70);
    other.push_back(80);
    other.push_back(90);
    Span sp = Span(50);
    try
    {
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(6);
        sp.addNumber(11);
        sp.addNumber(other.begin(), other.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}