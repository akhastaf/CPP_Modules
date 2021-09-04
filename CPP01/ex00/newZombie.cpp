#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *zombie;

    zombie = new Zombie();
    *zombie = Zombie(name);
    return zombie;
}