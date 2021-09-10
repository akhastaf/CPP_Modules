#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const & name) : FragTrap(name + "_clap_name"), ScavTrap(), _Name(name)
{
    std::cout << "DiamondTrap paramter constructor called" << std::endl;
    this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : FragTrap(src.getName() + "_clap_name"), ScavTrap()
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    this->_Name = src.getName();
    this->setHitPoints(src.getHitPoints());
    this->setEnergyPoints(src.getEnergyPoints());
    this->setAttackDamage(src.getAttackDamage());
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src)
{
    this->_Name = src.getName();
    this->setHitPoints(src.getHitPoints());
    this->setEnergyPoints(src.getEnergyPoints());
    this->setAttackDamage(src.getAttackDamage());
    return *this;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "this is my name " << this->_Name << " and this the ClapTrap Name " << ClapTrap::getName() << std::endl;
}


void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}