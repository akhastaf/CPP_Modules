#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat b("test", 1);
    try
    {
        b.incGrade();
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what();
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what();
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }

    std::cout << b << std::endl;;
    return 0;
}