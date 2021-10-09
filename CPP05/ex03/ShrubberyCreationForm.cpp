#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

 ShrubberyCreationForm & ShrubberyCreationForm::operator= (ShrubberyCreationForm const & src)
 {
     this->setIsSigned(src.getIsSigned());
     return *this;
 }

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
 {
     if (executor.getGrade() > this->getMinGardeForExecute())
        throw GradeTooLowException();
     std::ofstream file;
     file.open(this->getTarget() + "_shrubbery");
     if (!file.is_open())
        throw std::string("can't open this file " + this->getTarget() + "_shrubbery");
    file << "\
                v .   ., |  .,\n\
            -._\\/  .  \\ /    |/_\n\
                \\\\  _\\, y | \\//\n\
            _\\_.___\\\\, \\\\/ -.\\||\n\
            7-,--.._||  / / ,\n\
            /'     -. `./ / |/.'\n\
                        |    |//\n\
                        |    /\n\
                        |-   |\n\
                        |   =|\n\
                        |    |\n\
    --------------------/ ,  . \\--------\n";
    file.close();
 }

 
Form* ShrubberyCreationForm::make(std::string const & target)
{
    return new ShrubberyCreationForm(target);
}