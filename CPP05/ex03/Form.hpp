#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    private:
        std::string const _target;
        std::string const _name;
        unsigned int const _minGardeForSigne;
        unsigned int const _minGardeForExecute;
        bool _isSigned;
    public:
        Form();
        Form(std::string const & name, std::string const & target, unsigned int minGardeForSigne, unsigned int minGardeForExecute);
        Form(Form const & src);
        ~Form();
        Form & operator= (Form const & src);
        std::string getTarget() const;
        std::string getName() const;
        bool getIsSigned() const;
        void setIsSigned(int n);
        unsigned int getMinGardeForExecute() const;
        unsigned int getMinGardeForSigne() const;
        void beSigned(Bureaucrat & b);
        virtual void execute(Bureaucrat const & executor) const = 0;


        class GradeTooHighException : public Bureaucrat::GradeTooHighException
        {};
        class GradeTooLowException : public Bureaucrat::GradeTooLowException
        {};

};

std::ostream & operator<< (std::ostream & o, Form const & src);

#endif