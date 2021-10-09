#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"


class Intern
{
    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();
        Intern & operator=(Intern const & src);
        Form* makeForm(std::string const & name, std::string const & target);
        class NotFoundExcption : public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Form not Found";
            }
        };
};

#endif