#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const AAnimal*   i = new Cat();
    const AAnimal*   j = new Dog();

    std::cout<<i->getType()<<std::endl;
    std::cout<<j->getType()<<std::endl;
    
    i->makeSound();
    j->makeSound();

    delete j;
    delete i;
    std::cout<<BLUE<<"---------------------"<<RESET<<std::endl;
    std::cout<<std::endl;

    const int animalCount = 4;
    AAnimal* animals[animalCount];

    for (int i = 0; i < animalCount; ++i)
    {
        if (i % 2 == 0)
        {
            std::cout<<YELLOW<<"🐕 New Dog creation"<<RESET<<std::endl;
            animals[i] = new Dog();
            std::cout<<BLUE<<"---------------------"<<RESET<<std::endl;
        }
        else
        {
            std::cout<<YELLOW<<"🐱 New Cat creation"<<RESET<<std::endl;
            animals[i] = new Cat();
            std::cout<<BLUE<<"---------------------"<<RESET<<std::endl;
        }
    }
    std::cout<<YELLOW<<"All animals are destroyed"<<RESET<<std::endl;
    for (int i = 0; i < animalCount; ++i)
        delete animals[i];
    return 0;
}
