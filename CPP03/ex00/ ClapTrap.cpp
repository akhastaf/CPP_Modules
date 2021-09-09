#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

    std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name) : _Name(name)
{
    std::cout << "parameter constructor called" << std::endl;
    this->_HitPoints = 10;
    this->_EnergyPoints = 10;
    this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{

    std::cout << "copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{

    std::cout << "destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator= (ClapTrap const & src)
{
    this->_Name = src.getName();
    this->_HitPoints = src.getHitPoints();
    this->_EnergyPoints = src.getEnergyPoints();
    this->_AttackDamage = src.getAttackDamage();
    return *this;
}

void ClapTrap::attack(std::string const & target)
{
    this->_EnergyPoints -= this->_HitPoints;
    std::cout << "ClapTrap " << this->_Name << " attack" << target << ", causing" << this->_HitPoints <<  "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
     this->_EnergyPoints -= amount;
    std::cout << "ClapTrap " << this->_Name << " take damage" << amount <<  "points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_EnergyPoints += amount;
    std::cout << "ClapTrap " << this->_Name << " repaired with" << amount <<  "points and total point" << this->_EnergyPoints << std::endl;
}

std::string ClapTrap::getName() const
{
    return this->_Name;
}
int ClapTrap::getHitPoints() const
{
    return this->_HitPoints;
}
int ClapTrap::getEnergyPoints() const
{
    return this->_EnergyPoints;
}

int ClapTrap::getAttackDamage() const
{
    return this->_AttackDamage;
}
