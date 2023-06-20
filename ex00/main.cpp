#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal*   meta = new Animal();
    const Animal*   i = new Cat();
    const Animal*   j = new Dog();

    std::cout<<i->getType()<<std::endl;
    std::cout<<j->getType()<<std::endl;
    
    meta->makeSound();
    i->makeSound();
    j->makeSound();

    delete j;
    delete i;
    delete meta;
    std::cout<<BLUE<<"------------------------------------"<<RESET<<std::endl;

    const WrongAnimal*  w_meta = new WrongAnimal();
    const WrongAnimal*     w_i = new WrongCat();

    std::cout<<w_i->getType()<<std::endl;
    
    w_meta->makeSound();
    w_i->makeSound();

    delete w_i;
    delete w_meta;
    return 0;
}
