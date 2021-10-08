#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"


class Ice : public AMateria
{
    public:
        Ice();
        Ice(std::string const & type);
        Ice(Ice const & src);
        ~Ice();
        Ice & operator=(Ice const & src);
        virtual AMateria* clone () const;
        virtual void use(ICharacter& target);
};

#endif