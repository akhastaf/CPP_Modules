#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>

class Contact {
    
    int         id;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string login;
    std::string postalAddress;
    std::string emailAddress;
    std::string phoneNumber;
    std::string birthdayDate;
    std::string favoriteMeal;
    std::string underwearColor;
    std::string darkestSecret;

    public:
    void    setId(int id);
    int     getId();
    void    setFisrtName(std::string firstName);
    std::string    getFisrtName();
    void    setLastName(std::string lastName);
    std::string    getLastName();
    void    setNickName(std::string nickName);
    std::string    getNickName();
    void    setLogin(std::string login);
    std::string    getLogin();
    void    setPostalAddress(std::string postalAddress);
    std::string    getPostalAddress();
    void    setEmailAddress(std::string emailAddress);
    std::string    getEmailAddress();
    void    setPhoneNumber(std::string phoneNumber);
    std::string    getPhoneNumber();
    void    setBirthdayDate(std::string birthdayDate);
    std::string    getBirthdayDate();
    void    setFavoriteMeal(std::string favoriteMeal);
    std::string    getFavoriteMeal();
    void    setUnderwearColor(std::string underwearColor);
    std::string    getUnderwearColor();
    void    setDarkestSecret(std::string darkestSecret);
    std::string    getDarkestSecret();
    static bool isEmpty(Contact c);
    static void display(Contact c);
};
#endif