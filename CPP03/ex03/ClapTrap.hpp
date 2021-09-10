#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
private:
    std::string _Name;
    int _HitPoints;
    int _EnergyPoints;
    int _AttackDamage;
public:
    ClapTrap();
    ClapTrap(std::string const & name);
    ClapTrap(ClapTrap const & src);
    ~ClapTrap();
    ClapTrap & operator= (ClapTrap const & src);

    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName() const;
    void setName(std::string const & name);
    int getHitPoints() const;
    void setHitPoints(int const hitPoints);
    int getEnergyPoints() const;
    void setEnergyPoints(int const energyPoints);
    int getAttackDamage() const;
    void setAttackDamage(int const attackDamage);
};
#endif