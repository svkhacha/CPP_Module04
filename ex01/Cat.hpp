#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(const Cat& other);
        Cat&    operator=(const Cat& other);
        ~Cat(void);

        void    makeSound(void) const;
        void    setCatIdea(int i, const std::string& catIdea);
        const std::string&  getCatIdea(int i) const;

    private:
        Brain*  _catBrain;
};

#endif