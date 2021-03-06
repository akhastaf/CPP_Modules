#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain defaut constractor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = "default";
}

Brain::Brain(std::string const & src)
{
    std::cout << "Brain defaut constractor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = src;
}

Brain::Brain(Brain const & src)
{
    std::cout << "Brain copy constractor called" << std::endl;
    this->operator=(src);
}

Brain::~Brain()
{
    std::cout << "Brain destractor called" << std::endl;
}

Brain & Brain::operator= (Brain const & src)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = src.getIdea(i);
    return *this;
}

std::string Brain::getIdea(int i) const
{
    if (i < 0 || i >= 100)
        return NULL;
    return this->_ideas[i];
}

void Brain::setIdea(std::string const & idea)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = idea;
}