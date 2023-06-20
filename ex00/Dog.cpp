#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout<<GREEN<<"Default constructor called for Dog"<<RESET<<std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout<<GREEN<<"Copy constructor called for Dog"<<RESET<<std::endl;
}

Dog&    Dog::operator=(const Dog& other)
{
    std::cout<<"Copy assignment operator of Dog called"<<std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

Dog::~Dog(void)
{
    std::cout<<RED<<"Destructor called for Dog"<<RESET<<std::endl;
}


void    Dog::makeSound(void) const
{
    std::cout<<YELLOW<<"🐕 woof - woof"<<RESET<<std::endl;
}