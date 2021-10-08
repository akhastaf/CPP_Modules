#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal* animals[4];

    for (int i = 0; i < 4; i++)
    {
        if (i < 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    Cat tom;
    {
        Cat tmp = tom;
    }
    Cat kitty = tom;
    tom.getBrain()->setIdea("test");
    std::cout << tom.getBrain()->getIdea(0) << std::endl;
    std::cout << kitty.getBrain()->getIdea(0) << std::endl;

    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }
}