#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

#define RED		"\33[1;31m"
#define GREEN	"\33[1;32m" 
#define YELLOW	"\33[1;33m"  
#define BLUE	"\33[1;34m"  
#define RESET	"\33[0;m"

class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal&    operator=(const WrongAnimal& other);
        virtual ~WrongAnimal(void);

        const std::string&  getType(void) const; 
        void    makeSound(void) const;

    protected:
        std::string type;
};

#endif