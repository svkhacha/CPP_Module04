#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    public:
        Dog(void);
        Dog(const Dog& other);
        Dog&    operator=(const Dog& other);
        ~Dog(void);

        void    makeSound(void) const;
        
    private:
        Brain*  _dogBrain;
};

#endif