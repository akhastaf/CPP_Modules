#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const & name)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    this->setName(src.getName());
    this->setHitPoints(src.getHitPoints());
    this->setEnergyPoints(src.getEnergyPoints());
    this->setAttackDamage(src.getAttackDamage());
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator= (FragTrap const & src)
{
    this->setName(src.getName());
    this->setHitPoints(src.getHitPoints());
    this->setEnergyPoints(src.getEnergyPoints());
    this->setAttackDamage(src.getAttackDamage());
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << this->getName() << " hi fives!" << std::endl;
}