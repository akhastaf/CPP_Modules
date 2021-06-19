#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook()
{
    this->index = 0;
}

void    Phonebook::printFormated(std::string str)
{
    int l;
    int i;
    int s;

    l = str.length();
    std::cout << "# ";
    if (l < 10)
    {
        s = (16 - l) / 2;
        i = (16 - l) % 2 ? -1 : 0;
        while (i < s)
        {
            std::cout << " ";
            i++;
        }
        std::cout << str;
    }
    if (l > 10)
         std::cout << "   " << str.substr(0, 10) << "." << "   ";
    if (l < 10)
    {
        i = (16 - l) % 2 ? -1 : 0;
        while (i < s)
        {
            std::cout << " ";
            i++;
        }
    }
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
    int id;

    std::cout << "##################|##################|##################|##################" << std::endl;
    std::cout << "#      Index      #    Fisrt name    #     Last name    #    Nick name    #" << std::endl;
    std::cout << "##################|##################|##################|##################" << std::endl;
    i = 0;
    while (i < this->index)
    {
        if (!(Contact::isEmpty(this->contacts[i])))
        {
            std::cout << "#        " << this->contacts[i].getId() << "        ";

            this->printFormated(this->contacts[i].getFisrtName());
            this->printFormated(this->contacts[i].getLastName());
            this->printFormated(this->contacts[i].getNickName());
            std::cout << "#" << std::endl;
            std::cout << "##################|##################|##################|##################" << std::endl;
        }
        i++;
    }
    std::cout << "what index you want : ";
    std::cin >> id;
    if (id < 0 || id >= this->index)
        std::cout << "Not a valid index" << std::endl;
    else
        Contact::display(this->contacts[id]);
}

void    Phonebook::search()
{
    this->display();
}

int     main()
{
    Phonebook phonebook;
    std::string cmd;

    std::cout << "Welcome to my awesome Phonebook" << std::endl;
    while (1)
    {
        std::cout << "Command valid are : ADD, SEARCH, EXIT" << std::endl;
        std::cin >> cmd;
        if (cmd == "ADD")
            phonebook.add();
        else if (cmd == "SEARCH")
            phonebook.search();
        else if (cmd == "EXIT")
            break ;
        else
            std::cout << "Error command (ADD, SEARCH, EXIT)" << std::endl;
    }
    return 0;
}