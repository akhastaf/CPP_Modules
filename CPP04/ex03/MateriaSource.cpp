#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    *this = src;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i])
            delete this->_inventory[i];
}

MateriaSource & MateriaSource::operator= (MateriaSource const & src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
            if (this->_inventory[i])
                delete this->_inventory[i];
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = src._inventory[i];
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m->clone();
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] && this->_inventory[i]->getType() == type)
        {
            return this->_inventory[i]->clone();
        }
    }
    return NULL;
}