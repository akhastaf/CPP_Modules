#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat b1("nah", 50);
	ShrubberyCreationForm f1("my");
	RobotomyRequestForm f2("noise");
	PresidentialPardonForm f3("nothig");

	try
	{
		f1.execute(b1);
		f2.execute(b1);
		f3.execute(b1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	{
		Intern someRandomIntern;
		Form* rrf;
		Form* rrf1;
		try
		{
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			rrf->execute(b1);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			rrf1 = someRandomIntern.makeForm("roboy request", "Bender");
			rrf1->execute(b1);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	return 0;
}