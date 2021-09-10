#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << "the constructor is called" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "the destructor is called" << std::endl;
}

void    HumanB::attack() const
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon weapon)
{
    this->_weapon = &weapon;
}