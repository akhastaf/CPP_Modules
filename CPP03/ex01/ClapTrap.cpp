#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name) : _Name(name)
{
    std::cout << "ClapTrap parameter constructor called" << std::endl;
    this->_HitPoints = 10;
    this->_EnergyPoints = 10;
    this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{

    std::cout << "Claptrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{

    std::cout << "clapTrap destructor called" << std::endl;
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
    std::cout << "ClapTrap " << this->_Name << " attack " << target << ", causing " << this->_HitPoints <<  " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
     this->_EnergyPoints -= amount;
    std::cout << "ClapTrap " << this->_Name << " take damage " << amount <<  " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_EnergyPoints += amount;
    std::cout << "ClapTrap " << this->_Name << " repaired with " << amount <<  " points and total point " << this->_EnergyPoints << std::endl;
}

std::string ClapTrap::getName() const
{
    return this->_Name;
}

void ClapTrap::setName(std::string const & name)
{
    this->_Name = name;
}

int ClapTrap::getHitPoints() const
{
    return this->_HitPoints;
}

void ClapTrap::setHitPoints(int const hitPoints)
{
    this->_HitPoints = hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
    return this->_EnergyPoints;
}

void ClapTrap::setEnergyPoints(int const energyPoints)
{
    this->_EnergyPoints = energyPoints;
}

int ClapTrap::getAttackDamage() const
{
    return this->_AttackDamage;
}

void ClapTrap::setAttackDamage(int const attackDamage)
{
    this->_AttackDamage = attackDamage;
}
