#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(Dog const & src)
{
    *this = src;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

Dog & Dog::operator= (Dog const & src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = src.getType();
    this->brain = new Brain();
    *(this->brain) = *(src.getBrain());
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