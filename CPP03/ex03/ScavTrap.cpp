#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->setEnergyPoints(50);
}

ScavTrap::ScavTrap(std::string const & name)
{
    std::cout << "ScavTrap parameter constructor called" << std::endl;
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    this->setName(src.getName());
    this->setHitPoints(src.getHitPoints());
    this->setEnergyPoints(src.getEnergyPoints());
    this->setAttackDamage(src.getAttackDamage());
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator= (ScavTrap const & src)
{
    this->setName(src.getName());
    this->setHitPoints(src.getHitPoints());
    this->setEnergyPoints(src.getEnergyPoints());
    this->setAttackDamage(src.getAttackDamage());
    return *this;
}

void ScavTrap::attack(std::string const & target)
{
    this->setEnergyPoints(this->getEnergyPoints() - this->getHitPoints());
    std::cout << "ScavTrap " << this->getName() << " attack " << target << ", causing " << this->getHitPoints() <<  " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->getName() << " have enterred in Gate keeper mode" << std::endl;
}