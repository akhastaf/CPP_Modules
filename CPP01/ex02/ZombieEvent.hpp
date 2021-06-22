#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include <iostream>
#include "Zombie.hpp"
class ZombieEvent {
    /* data */
    public:
    ZombieEvent(/* args */);
    void setZombieType(std::string type);
    Zombie* newZombie(std::string name);
};

#endif