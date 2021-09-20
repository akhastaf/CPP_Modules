#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
    *this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator= (RobotomyRequestForm const & src)
{
    this->setIsSigned(src.getIsSigned());
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    std::cout << "Zzzzzzzzzzzzzzzzz..." << std::endl;
    std::cout << this->getTarget() << " has been robotomized successfully 50\\% of the time" << std::endl;
}