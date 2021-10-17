#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include "contact.hpp"

class Phonebook {
    
    Contact contacts[8];
    int index;

    public:
    Phonebook();
    void    add();
    void    search();
    private:
    void    display();
    void printFormated(std::string str, int i);
};

#endif