#include "Zombie.hpp"

int     main()
{
    Zombie *zombieOnHeap;

    zombieOnHeap = newZombie("blabla");
    zombieOnHeap->announce();
    randomChump("Nah");
    delete zombieOnHeap;
}