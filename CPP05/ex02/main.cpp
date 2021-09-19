#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	ShrubberyCreationForm f1;

	f1.createTree("my");
	// Bureaucrat bob("bob", 10);

	// try
	// {
	// 	bob.incGrade();
	// 	std::cout << bob << std::endl;
	// 	bob.incGrade();
	// 	std::cout << bob << std::endl;
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// Form formA("a", 10, 10);
	// Form formB("b", 10, 10);
	// bob.signForm(formA);
	// bob.decGrade();
	// bob.signForm(formB);
	// std::cout << formA << std::endl;
	// std::cout << formB << std::endl;
	return 0;
}