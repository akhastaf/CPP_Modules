#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade): _Name(name)
{
    std::cout << "Bureaucrat parametr constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_Grade = grade;
}


Bureaucrat::Bureaucrat(Bureaucrat const & src) : _Name(src.getName()), _Grade(src.getGrade())
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat  destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator= (Bureaucrat const & src)
{
    (std::string)this->_Name = src.getName();
    this->_Grade = src.getGrade();
    return *this;
}

void    Bureaucrat::setName(std::string const & name)
{
    (std::string)this->_Name = name;
}

std::string   Bureaucrat::getName() const
{
    return this->_Name;
}

void    Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_Grade = grade;
}

int    Bureaucrat::getGrade() const
{
    return this->_Grade;
}

void    Bureaucrat::incGrade()
{
    if (this->_Grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_Grade--;
}

void    Bureaucrat::decGrade()
{
    if (this->_Grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_Grade++;
}

std::ostream & operator<< (std::ostream & o, Bureaucrat const & src)
{
    o << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
    return o;
}