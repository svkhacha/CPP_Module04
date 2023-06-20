#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

#define RED		"\33[1;31m"
#define GREEN	"\33[1;32m" 
#define YELLOW	"\33[1;33m"  
#define BLUE	"\33[1;34m"  
#define RESET	"\33[0;m"

class Character : public ICharacter
{
    public:
        Character(void);
        Character(std::string const& name);
        Character(const Character& other);
        Character& operator=(const Character& other);
        ~Character(void);

        std::string const&  getName(void) const;
        void    equip(AMateria* m);
        void    unequip(int idx);
        void    use(int idx, ICharacter& target);

    private:
        std::string _name;
        AMateria*   _slot[4];

};

#endif