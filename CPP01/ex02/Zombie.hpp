#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie {
    std::string type;
    std::string name;

    public:
    Zombie(std::string name, std::string type);
    void    announce();
};

#endif