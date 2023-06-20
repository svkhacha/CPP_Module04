#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(const Dog& other);
        Dog&    operator=(const Dog& other);
        ~Dog(void);

        void    makeSound(void) const;
        void    setDogIdea(int i, const std::string& dogIdea);
        const std::string&  getDogIdea(int i) const;
    
    private:
        Brain*  _dogBrain;
};

#endif