#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string const & name);
    FragTrap(FragTrap const & src);
    ~FragTrap();
    FragTrap & operator= (FragTrap const & src);
    void highFivesGuys(void);
};




#endif