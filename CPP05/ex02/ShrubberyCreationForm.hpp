#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP
# include <iostream>
#include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    /* data */
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const & name, unsigned int minGardeForSigne, unsigned int minGardeForExecute);
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm & operator= (ShrubberyCreationForm const & src);
    void    createTree(std::string const & filename);
};




#endif