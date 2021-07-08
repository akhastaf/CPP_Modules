#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "the default constructor called" << std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Constructor called for " << this->name << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " destructor is called" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}