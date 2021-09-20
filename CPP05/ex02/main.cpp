#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	
	return 0;
}