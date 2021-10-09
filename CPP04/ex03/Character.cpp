#include "Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(std::string const & name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(Character const & src)
{
    *this = src;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i])
            delete this->_inventory[i];
}

Character & Character::operator= (Character const & src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
            if (this->_inventory[i])
                delete this->_inventory[i];
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = src._inventory[i]->clone();
    }
    return *this;
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}