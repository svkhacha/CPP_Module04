#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

#define RED		"\33[1;31m"
#define GREEN	"\33[1;32m" 
#define YELLOW	"\33[1;33m"  
#define BLUE	"\33[1;34m"  
#define RESET	"\33[0;m"

class AMateria
{
    public:
        AMateria(void);
        AMateria(std::string const& t);
        AMateria(const AMateria& other);
        AMateria& operator=(const AMateria& other);
        virtual ~AMateria(void);

        std::string const&  getType(void) const;
        virtual AMateria*   clone() const = 0;
        virtual void    use(ICharacter& target);

    protected:
        std::string type;
};

#endif