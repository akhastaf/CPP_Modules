#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "Constructor called" << std::endl;
}

Weapon::Weapon(std::string type) : _type(type)
{
    std::cout << "Constructor called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Destructor called" << std::endl;
}

void    Weapon::setType(std::string const & type)
{
    this->_type = type;
}

std::string const & Weapon::getType() const
{
    return this->_type;
}