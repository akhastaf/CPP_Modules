#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(Cat const & src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = src.getType();
    this->brain = new Brain();
    *(this->brain) = *(src.getBrain());
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
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

Brain* Cat::getBrain() const
{
    return this->brain;
}