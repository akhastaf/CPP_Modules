#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
private:
    /* data */
public:
    Cure();
    Cure(Cure const & src);
    ~Cure();
    Cure & operator= (Cure const & src);
    virtual AMateria* clone () const;
};



#endif