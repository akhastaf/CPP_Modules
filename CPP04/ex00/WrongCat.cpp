#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    this->type = src.getType();
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator= (WrongCat const & src)
{
    this->type = src.getType();
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << this->type << " Maiw Maiw" << std::endl;
}
