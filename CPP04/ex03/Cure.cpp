#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}


Cure::Cure(Cure const & src)
{
    *this = src;
}

Cure::~Cure()
{
}


Cure & Cure::operator=(Cure const & src)
{
    this->type = src.getType();
    return *this;
}

AMateria* Cure::clone () const
{
    AMateria* cure = new Cure();
    return cure;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}