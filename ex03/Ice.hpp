#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

#define RED		"\33[1;31m"
#define GREEN	"\33[1;32m" 
#define YELLOW	"\33[1;33m"  
#define BLUE	"\33[1;34m"  
#define RESET	"\33[0;m"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);
        ~Ice(void);

        Ice*    clone(void) const;
        void    use(ICharacter& target);
};

#endif