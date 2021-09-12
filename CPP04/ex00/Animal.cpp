#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(Animal const & src)
{
    this->type = src.getType();
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator= (Animal const & src)
{
    this->type = src.getType();
    return *this;
}

void Animal::makeSound() const
{
    std::cout << this->type << " ohooo " << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}