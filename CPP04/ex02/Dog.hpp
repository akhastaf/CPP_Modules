#ifndef DOG_HPP
# define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
    Brain *brain;
public:
    Dog();
    Dog(Dog const & src);
    ~Dog();
    Dog & operator= (Dog const & src);
    virtual void makeSound() const;
    Brain* getBrain() const;
};

#endif