#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    public:
        Cat(void);
        Cat(const Cat& other);
        Cat&    operator=(const Cat& other);
        ~Cat(void);

        void    makeSound(void) const;
        
    private:
        Brain*  _catBrain;
};

#endif