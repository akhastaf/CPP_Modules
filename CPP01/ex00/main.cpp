#include "Pony.hpp"

void    ponyOnTheStack()
{
    Pony whitePony("white", 150, 226.769);
    std::cout << "The pony " << whitePony.getColor() << " is on the stack" << std::endl;
}

void    ponyOnTheHeap()
{
    Pony *brownPony = new Pony("brown", 145, 294.835);
    std::cout << "The pony " << brownPony->getColor() << " is on the heap" << std::endl;
    delete brownPony;
}

int     main()
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return 0;
}