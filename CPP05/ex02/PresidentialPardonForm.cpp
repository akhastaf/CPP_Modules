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

virtual void execute(Bureaucrat const & executor) const
{
    std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

