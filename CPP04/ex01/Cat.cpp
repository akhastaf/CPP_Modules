#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(Cat const & src)
{
   *this = src;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

Cat & Cat::operator= (Cat const & src)
{
    this->brain =  new Brain();
    this->type = src.getType();
    *this->brain =  *(src.getBrain());
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