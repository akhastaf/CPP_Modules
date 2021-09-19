#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    private:
        std::string const _name;
        unsigned int const _minGardeForSigne;
        unsigned int const _minGardeForExecute;
        bool _isSigned;
    public:
        Form();
        Form(std::string const & name, unsigned int minGardeForSigne, unsigned int _minGardeForExecute);
        Form(Form const & src);
        ~Form();
        Form & operator= (Form const & src);
        std::string getName() const;
        bool getIsSigned() const;
        unsigned int getMinGardeForExecute() const;
        unsigned int getMinGardeForSigne() const;
        void beSigned(Bureaucrat & b);


        class GradeTooHighException : public Bureaucrat::GradeTooHighException
        {};
        class GradeTooLowException : public Bureaucrat::GradeTooLowException
        {};

};

std::ostream & operator<< (std::ostream & o, Form const & src);

#endif