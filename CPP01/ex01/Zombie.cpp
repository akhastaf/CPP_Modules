#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "the default constructor called" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Constructor called for " << this->_name << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " destructor is called" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string const & name)
{
    this->_name = name;
}