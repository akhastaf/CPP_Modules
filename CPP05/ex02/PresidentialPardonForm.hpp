#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP
# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    /* data */
public:
    PresidentialPardonForm() : Form("", 25, 5){}
    PresidentialPardonForm(PresidentialPardonForm const & src);
    ~PresidentialPardonForm(){}
    PresidentialPardonForm & operator=(PresidentialPardonForm const & src);
    void pardon(std::string const & target) const;
};


#endif