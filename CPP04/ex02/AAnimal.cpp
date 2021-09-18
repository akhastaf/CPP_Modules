#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "Animal";
}

AAnimal::AAnimal(AAnimal const & src)
{
    this->type = src.getType();
    std::cout << "Animal copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal destructor called" << std::endl;
}

AAnimal & AAnimal::operator= (AAnimal const & src)
{
    this->type = src.getType();
    return *this;
}

std::string AAnimal::getType() const
{
    return this->type;
}