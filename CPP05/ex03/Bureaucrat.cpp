#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const & name, unsigned int grade): _Name(name)
{
    std::cout << "Bureaucrat parametr constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_Grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    (std::string)this->_Name = src.getName();
    this->_Grade = src.getGrade();
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
    this->_Grade = grade;
}

unsigned int    Bureaucrat::getGrade() const
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

int    Bureaucrat::signForm(Form const & f)
{
    if (!f.getIsSigned())
    {
        std::cout << this->_Name << " signs " << f.getName() << std::endl;
        return 1;
    }
    std::cout  << this->_Name << " cannot sign " << f.getName() << "because is signed" << std::endl;
    return 0;

}