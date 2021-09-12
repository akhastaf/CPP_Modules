#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon
{
    std::string _type;
    public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    void    setType(std::string const & type);
    std::string const & getType() const;
};
#endif