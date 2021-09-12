#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(Dog const & src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = src.getType();
    this->brain = new Brain();
    *(this->brain) = *(src.getBrain());
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
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

Brain* Dog::getBrain() const
{
    return this->brain;
}