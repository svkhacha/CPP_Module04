#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

#define RED		"\33[1;31m"
#define GREEN	"\33[1;32m" 
#define YELLOW	"\33[1;33m"  
#define BLUE	"\33[1;34m"  
#define RESET	"\33[0;m"

class AAnimal
{
    public:
        AAnimal(void);
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual ~AAnimal(void);

        const std::string&  getType(void) const; 
        virtual void    makeSound(void) const = 0;

    protected:
        std::string type;
};

#endif