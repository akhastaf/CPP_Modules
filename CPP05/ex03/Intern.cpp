#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(Intern const & src)
{
    *this = src;
}

Intern::~Intern()
{}

Intern & Intern::operator=(Intern const & src)
{
    (void)src;
    return *this;
}

Form* Intern::makeForm(std::string const & name, std::string const & target)
{
    std::string formsType[3] = {"robotomy request", "presidental pardon", "shrubbery creation"};
    Form* (*formsFunc[3])(std::string const & target) = {RobotomyRequestForm::make, PresidentialPardonForm::make, ShrubberyCreationForm::make};

    for (int i = 0; i < 3; i++)
    {
        if (formsType[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return formsFunc[i](target);
        }
    }
    throw Intern::NotFoundExcption();
    return NULL;
}