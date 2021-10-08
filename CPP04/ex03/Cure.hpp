#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const & src);
        ~Cure();
        Cure & operator= (Cure const & src);
        virtual AMateria* clone () const;
        virtual void use(ICharacter& target);
};



#endif