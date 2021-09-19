#ifndef ROBOTO_MY_REQUEST_FORM_HPP
# define ROBOTO_MY_REQUEST_FORM_HPP
# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        /* data */
    public:
        RobotomyRequestForm() : Form("", 72, 75){}
        RobotomyRequestForm(RobotomyRequestForm const & src);
        ~RobotomyRequestForm(){};
        RobotomyRequestForm & operator= (RobotomyRequestForm const & src);
        void drill(std::string const & target) const;
};



#endif