# include "AMateria.hpp"


AMateria::AMateria()
{

}
AMateria::~AMateria()
{

}

AMateria::AMateria(std::string const & type) : type(type)
{
}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* shoots an Materia bolt at " << target.getName() << " *" << std::endl;
}