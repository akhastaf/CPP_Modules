#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
    std::string const _name;
    Weapon & _weapon;
    public:
    HumanA(std::string name, Weapon & weapon);
    ~HumanA();
    void    attack() const;
};

#endif