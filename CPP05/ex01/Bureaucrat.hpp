#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <ostream>


class Form;

class Bureaucrat
{
    private:
        std::string const _Name;
        unsigned int _Grade;
    public:
        Bureaucrat();
        Bureaucrat(Bureaucrat const & src);
        Bureaucrat(std::string const & name, unsigned int grade);
        ~Bureaucrat();
        Bureaucrat & operator= (Bureaucrat const & src);
        void    setName(std::string const & name);
        std::string    getName() const;
        void    setGrade(int Grade);
        unsigned int    getGrade() const;
        void    incGrade();
        void    decGrade();
        int    signForm(Form const & f);
        class GradeTooHighException : public std::exception
        {
            public:
            virtual const char* what() const  throw()
            {
                return ("The grade is too hight for this bureaucrat");
            }
        };

        class GradeTooLowException : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return ("The grade is too low for this bureaucrat");
            }
        };
    
};
std::ostream & operator<< (std::ostream & o, Bureaucrat const & src);
#endif