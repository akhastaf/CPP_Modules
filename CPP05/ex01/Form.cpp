#include "Form.hpp"

Form::Form() : _minGardeForSigne(0), _minGardeForExecute(0)
{
    std::cout << "Form default coonstructor called" << std::endl;
    this->_isSigned = false;
}

Form::Form(std::string const & name, unsigned int minGardeForSigne, unsigned int minGardeForExecute)
        : _name(name), _minGardeForSigne(minGardeForSigne), _minGardeForExecute(minGardeForExecute)
{
    std::cout << "Form paramter coonstructor called" << std::endl;
    this->_isSigned = false;
    if (this->_minGardeForExecute < 1 || this->_minGardeForSigne < 1)
        throw Form::GradeTooHighException();
    else if (this->_minGardeForExecute > 150 || this->_minGardeForSigne > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const & src) : _name(src.getName()), _minGardeForSigne(src.getMinGardeForSigne()), _minGardeForExecute(src.getMinGardeForExecute()), _isSigned(src.getIsSigned())
{
    std::cout << "Form copy coonstructor called" << std::endl;
}


Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form & Form::operator= (Form const & src)
{
    (std::string)this->_name = src.getName();
    // (unsigned int)this->_minGardeForExecute = src.getMinGardeForExecute();
    // (unsigned int)this->_minGardeForSigne = src.getMinGardeForSigne();
    this->_isSigned = src.getIsSigned();
    return *this;
}

std::string Form::getName() const
{
    return this->_name;
}

bool Form::getIsSigned() const
{
    return this->_isSigned;
}

unsigned int Form::getMinGardeForExecute() const
{
    return this->_minGardeForExecute;
}

unsigned int Form::getMinGardeForSigne() const
{
    return this->_minGardeForSigne;
}

std::ostream & operator<< (std::ostream & o, Form const & src)
{
    o << src.getName() ;
    if (src.getIsSigned())
        o << " is signed";
    else
        o << " is not signed";
    return o;
}

void    Form::beSigned(Bureaucrat & b)
{
    if (b.getGrade() > this->_minGardeForSigne)
        throw Form::GradeTooLowException();
    else if (b.signForm(*this))
        this->_isSigned = true;
}