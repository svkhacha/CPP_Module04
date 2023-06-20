#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define RED		"\33[1;31m"
#define GREEN	"\33[1;32m" 
#define YELLOW	"\33[1;33m"  
#define BLUE	"\33[1;34m"  
#define RESET	"\33[0;m"

class Animal
{
    public:
        Animal(void);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal(void);

        const std::string&  getType(void) const; 
        virtual void    makeSound(void) const;

    protected:
        std::string type;
};

#endif