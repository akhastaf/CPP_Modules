#include "Base.hpp"

Base * generate(void)
{
    int r = rand() % 3;
    if (!r)
        return new A();
    else if (r == 1)
        return new B();
    return new C();
}

void identify(Base * p)
{

    if ((dynamic_cast<A*>(p)))
        std::cout << "A" << std::endl;
    else if ((dynamic_cast<B*>(p)))
        std::cout << "B" << std::endl;
    else if ((dynamic_cast<C*>(p)))
        std::cout << "C" << std::endl;
}

void identify( Base & p)
{
    Base tmp;
    try
    {
        tmp = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::bad_cast & e)
    {}
    try
    {
        tmp = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(const std::bad_cast& e)
    {}
    try
    {
        tmp = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(const std::bad_cast& e)
    { }
    
}

int main()
{
    srand(time(0));
    Base *a[10];
    for (int i = 0; i < 10; i++)
        a[i] = generate();
    std::cout << "identifty with ptr" << std::endl;
    for (int i = 0; i < 10; i++)
        identify(a[i]);
    Base & ref0 = *a[9]; 
    Base & ref1 = *a[8]; 
    Base & ref2 = *a[7];
    Base & ref3 = *a[6]; 
    Base & ref4 = *a[5]; 
    Base & ref5 = *a[4];
    Base & ref6 = *a[3]; 
    Base & ref7 = *a[2]; 
    Base & ref8 = *a[1];
    Base & ref9 = *a[0];
    std::cout << "identifty with ref" << std::endl;
    identify(ref0);
    identify(ref1);
    identify(ref2);
    identify(ref3);
    identify(ref4);
    identify(ref5);
    identify(ref6);
    identify(ref7);
    identify(ref8);
    identify(ref9);

    return 0;
}