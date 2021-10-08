#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    this->type = src.getType();
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator= (WrongAnimal const & src)
{
    this->type = src.getType();
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << this->type << " ohooo " << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}