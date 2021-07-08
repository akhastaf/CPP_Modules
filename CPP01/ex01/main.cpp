#include "Zombie.hpp"

int main()
{
    Zombie *zombies;
    int i;

    zombies = zombieHorde(5, "Frankishtien");
    i = 0;
    while (i < 5)
    {
        zombies[i].announce();
        i++;
    }
    delete [] zombies;
    return 0;
}