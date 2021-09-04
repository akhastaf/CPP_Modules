#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Zombie " << this->_name << " constructor is called" << std::endl;
}

Zombie::Zombie()
{
    std::cout << "Zombie constructor is called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " destructor is called" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}