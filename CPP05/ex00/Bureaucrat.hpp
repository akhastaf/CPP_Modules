#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <ostream>

class Bureaucrat
{
    private:
        std::string const _Name;
        int _Grade;
    public:
        Bureaucrat();
        Bureaucrat(Bureaucrat const & src);
        Bureaucrat(std::string const & name, int grade);
        ~Bureaucrat();
        Bureaucrat & operator= (Bureaucrat const & src);
        void    setName(std::string const & name);
        std::string    getName() const;
        void    setGrade(int Grade);
        int    getGrade() const;
        void    incGrade();
        void    decGrade();

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