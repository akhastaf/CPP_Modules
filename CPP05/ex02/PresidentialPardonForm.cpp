#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
    *this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
    this->setIsSigned(src.getIsSigned());
    return *this;
}

void PresidentialPardonForm::pardon(std::string const & target) const
{
    std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

