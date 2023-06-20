#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout<<GREEN<<"Default constructor called for Cat"<<RESET<<std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout<<GREEN<<"Copy constructor called for Cat"<<RESET<<std::endl;
}

Cat&    Cat::operator=(const Cat& other)
{
    std::cout<<"Copy assignment operator of Cat called"<<std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

Cat::~Cat(void) 
{
    std::cout<<RED<<"Destructor called for Cat"<<RESET<<std::endl; 
}

void    Cat::makeSound(void) const 
{
    std::cout<<YELLOW<<"🐱 meooow - meooow"<<RESET<<std::endl;
}