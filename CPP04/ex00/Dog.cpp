#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const & src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = src.getType();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator= (Dog const & src)
{
    this->type = src.getType();
    return *this;
}

void Dog::makeSound() const
{
    std::cout << this->type << " Haw Haw" << std::endl;
}
