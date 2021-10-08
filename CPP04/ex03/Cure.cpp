#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
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

AMateria* Cure::clone () const;
{
    AMateria* cure = new Cure();
    return cure;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target->getName() << " *" << std::endl;
}