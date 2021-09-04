#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
    std::cout << "the constructor is called" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "the destructor is called" << std::endl;
}

void    HumanA::attack() const
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}