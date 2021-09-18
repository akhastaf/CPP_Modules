#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain();
    Brain(Brain const & src);
    ~Brain();
    Brain & operator= (Brain const & src);

    std::string getIdea(int i) const;
};



#endif