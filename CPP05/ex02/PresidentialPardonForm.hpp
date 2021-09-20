#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP
# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    PresidentialPardonForm() : Form("","", 25, 5){}
public:
    PresidentialPardonForm(std::string const & target) : Form("",target, 25, 5){}
    PresidentialPardonForm(PresidentialPardonForm const & src);
    ~PresidentialPardonForm(){}
    PresidentialPardonForm & operator=(PresidentialPardonForm const & src);
    virtual void execute(Bureaucrat const & executor) const;
};


#endif