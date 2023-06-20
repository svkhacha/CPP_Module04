#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal* i = new Cat();
    // const Animal* j = new Dog();
    // delete i;
    // delete j;

    const int animalCount = 4;
    Animal* animals[animalCount];

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
