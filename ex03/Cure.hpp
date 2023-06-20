#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

#define RED		"\33[1;31m"
#define GREEN	"\33[1;32m" 
#define YELLOW	"\33[1;33m"  
#define BLUE	"\33[1;34m"  
#define RESET	"\33[0;m"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);
        ~Cure(void);

        Cure*    clone(void) const;
        void    use(ICharacter& target);
};

#endif