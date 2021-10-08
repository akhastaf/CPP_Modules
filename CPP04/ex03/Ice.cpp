#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(std::string const & type): AMateria(type)
{

}

Ice::Ice(Ice const & src)
{
    *this = src;
}

Ice & Ice::operator= (Ice const & src)
{
    this->type = src.getType();
    return *this;
}

AMateria* Ice::clone () const;
{
    AMateria* ice = new Ice();
    return ice;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target->getName() << " *" << std::endl;
}