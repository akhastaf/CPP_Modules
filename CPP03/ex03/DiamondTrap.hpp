#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string _Name;
public:
    DiamondTrap();
    DiamondTrap(std::string const & name);
    DiamondTrap(DiamondTrap const & src);
    ~DiamondTrap();
    DiamondTrap & operator= (DiamondTrap const & src);
    void whoAmI();
    void attack(std::string const & target);
};
#endif