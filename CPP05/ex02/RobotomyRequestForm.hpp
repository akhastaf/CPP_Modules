#ifndef ROBOTO_MY_REQUEST_FORM_HPP
# define ROBOTO_MY_REQUEST_FORM_HPP
# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        RobotomyRequestForm() : Form("","", 72, 75){}
    public:
        RobotomyRequestForm(std::string const & target) : Form("",target 72, 75){}
        RobotomyRequestForm(RobotomyRequestForm const & src);
        ~RobotomyRequestForm(){};
        RobotomyRequestForm & operator= (RobotomyRequestForm const & src);
        virtual void execute(Bureaucrat const & executor) const;
};



#endif