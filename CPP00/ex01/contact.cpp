#include "./contact.hpp"
#include <iostream>

void    Contact::setId(int id)
{
    this->id = id;
}

int     Contact::getId()
{
    return this->id;
}

void    Contact::setFisrtName(std::string firstName)
{
    this->firstName = firstName;
}

std::string    Contact::getFisrtName()
{
    return this->firstName;
}

void    Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

std::string    Contact::getLastName()
{
    return this->lastName;
}

void    Contact::setNickName(std::string nickName)
{
    this->nickName = nickName;
}

std::string    Contact::getNickName()
{
    return this->nickName;
}

void    Contact::setLogin(std::string login)
{
    this->login = login;
}

std::string    Contact::getLogin()
{
    return this->login;
}

void    Contact::setPostalAddress(std::string postalAddress)
{
    this->postalAddress = postalAddress;
}

std::string    Contact::getPostalAddress()
{
    return this->postalAddress;
}

void    Contact::setEmailAddress(std::string emailAddress)
{
    this->emailAddress = emailAddress;
}

std::string    Contact::getEmailAddress()
{
    return this->emailAddress;
}

void    Contact::setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

std::string    Contact::getPhoneNumber()
{
    return this->phoneNumber;
}

void    Contact::setBirthdayDate(std::string birthdayDate)
{
    this->birthdayDate = birthdayDate;
}

std::string    Contact::getBirthdayDate()
{
    return this->birthdayDate;
}

void    Contact::setFavoriteMeal(std::string favoriteMeal)
{
    this->favoriteMeal = favoriteMeal;
}

std::string    Contact::getFavoriteMeal()
{
    return this->favoriteMeal;
}

void    Contact::setUnderwearColor(std::string underwearColor)
{
    this->underwearColor = underwearColor;
}

std::string    Contact::getUnderwearColor()
{
    return this->underwearColor;
}

void    Contact::setDarkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

std::string    Contact::getDarkestSecret()
{
    return this->darkestSecret;
}

bool    Contact::isEmpty(Contact c)
{
    if ((c.getFisrtName()).empty() || (c.getLastName()).empty() || (c.getNickName()).empty())
        return true;
    return false;
}

void    Contact::display(Contact c)
{
    std::cout << "Fisrtname :\t\t" << c.getFisrtName() << std::endl;
    std::cout << "Lastname :\t\t" << c.getLastName() << std::endl;
    std::cout << "Nickname :\t\t" << c.getNickName() << std::endl;
    std::cout << "Login :\t\t\t" << c.getLogin() << std::endl;
    std::cout << "Postal address :\t" << c.getPostalAddress() << std::endl;
    std::cout << "Email address :\t\t" << c.getEmailAddress() << std::endl;
    std::cout << "Phone Number :\t\t" << c.getPhoneNumber() << std::endl;
    std::cout << "Birthday date :\t\t" << c.getBirthdayDate() << std::endl;
    std::cout << "Favorite meal :\t\t" << c.getFavoriteMeal() << std::endl;
    std::cout << "Underwear color :\t" << c.getUnderwearColor() << std::endl;
    std::cout << "Darkest secret :\t" << c.getDarkestSecret() << std::endl;
}