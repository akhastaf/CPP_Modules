#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP
# include <iostream>
#include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    ShrubberyCreationForm() : Form("","", 145, 137){};
public:
    ShrubberyCreationForm(std::string const & target) : Form("",target, 145, 137){};
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm & operator= (ShrubberyCreationForm const & src);
    virtual void execute(Bureaucrat const & executor) const;
    static Form* make(std::string const & target);
};

#endif