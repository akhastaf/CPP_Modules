#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const & src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = src.getType();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator= (Cat const & src)
{
    this->type = src.getType();
    return *this;
}

void Cat::makeSound() const
{
    std::cout << this->type << " Maiw Maiw" << std::endl;
}
