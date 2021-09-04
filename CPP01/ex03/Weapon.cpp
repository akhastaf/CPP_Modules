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

void    Weapon::setType(std::string type)
{
    this->_type = type;
}

std::string&    Weapon::getType()
{
    std::string& ref = this->_type;
    return ref;
}