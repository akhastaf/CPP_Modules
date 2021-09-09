#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    /* data */
public:
    ScavTrap();
    ScavTrap(std::string const & name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap();
    ScavTrap & operator= (ScavTrap const & src);

    void attack(std::string const & target);
    void guardGate();
};




#endif