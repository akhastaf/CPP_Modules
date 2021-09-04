#include <iostream>
#include <iomanip>
#include "phonebook.hpp"

Phonebook::Phonebook()
{
    this->index = 0;
}

void    Phonebook::printFormated(std::string str, int i)
{
    int l;

    l = str.length();
    if (l < 10)
    {
        std::cout << std::setw(10 - l + 1);
        std::cout << str;
    }
    if (l > 10)
         std::cout << str.substr(0, 9) << ".";
    std::cout << "|";
    if (!i)
        std::cout << std::endl;
}

void    Phonebook::add()
{
    std::string info;
    
    if (index == 8)
    {
        std::cout << "The phonebook is full" << std::endl;
        return ;
    }
    this->contacts[this->index].setId(this->index);
    std::cout << "Fisrtname : ";
    std::cin >> info;
    this->contacts[this->index].setFisrtName(info);
    std::cout << "Lastname : ";
    std::cin >> info;
    this->contacts[this->index].setLastName(info);
    std::cout << "Nickname : ";
    std::cin >> info;
    this->contacts[this->index].setNickName(info);
    std::cout << "Login : ";
    std::cin >> info;
    this->contacts[this->index].setLogin(info);
    std::cout << "Postal address : ";
    std::cin >> info;
    this->contacts[this->index].setPostalAddress(info);
    std::cout << "Email address : ";
    std::cin >> info;
    this->contacts[this->index].setEmailAddress(info);
    std::cout << "Phone number : ";
    std::cin >> info;
    this->contacts[this->index].setPhoneNumber(info);
    std::cout << "Birthday date : ";
    std::cin >> info;
    this->contacts[this->index].setBirthdayDate(info);
    std::cout << "Favorite meal : ";
    std::cin >> info;
    this->contacts[this->index].setFavoriteMeal(info);
    std::cout << "Underwear color : ";
    std::cin >> info;
    this->contacts[this->index].setUnderwearColor(info);
    std::cout << "Darkest secret : ";
    std::cin >> info;
    this->contacts[this->index].setDarkestSecret(info);
    this->index++;
}

void    Phonebook::display()
{
    int i;

    this->printFormated("Index", 1);
    this->printFormated("Fisrtname", 1);
    this->printFormated("Lastname", 1);
    this->printFormated("Nickname", 0);
    i = 0;
    while (i < this->index)
    {
        if (!(Contact::isEmpty(this->contacts[i])))
        {
            this->printFormated(std::to_string(this->contacts[i].getId()), 1);
            this->printFormated(this->contacts[i].getFisrtName(), 1);
            this->printFormated(this->contacts[i].getLastName(), 1);
            this->printFormated(this->contacts[i].getNickName(), 0);
        }
        i++;
    }
}

void    Phonebook::search()
{
    int id;

    this->display();
    std::cout << "what index you want : ";
    std::cin >> id;
    if (id < 0 || id >= this->index)
        std::cout << "Not a valid index" << std::endl;
    else
        Contact::display(this->contacts[id]);
}

int     main()
{
    Phonebook phonebook;
    std::string cmd;

    std::cout << "Welcome to my awesome Phonebook" << std::endl;
    while (1)
    {
        std::getline(std::cin, cmd);
        if (cmd == "ADD")
            phonebook.add();
        else if (cmd == "SEARCH")
            phonebook.search();
        else if (cmd == "EXIT")
            break ;
    }
    return 0;
}