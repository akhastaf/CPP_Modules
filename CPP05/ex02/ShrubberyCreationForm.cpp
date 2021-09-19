#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & name, unsigned int minGardeForSigne, unsigned int minGardeForExecute) : Form(name, minGardeForSigne, minGardeForExecute)
{
}

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

 void   ShrubberyCreationForm::createTree(std::string const & filename)
 {
     std::ofstream file;
     file.open(filename + "_shrubbery");
     if (!file.is_open())
        throw std::string("can't open this file " + filename + "_shrubbery");
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