#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
    std::cout<<GREEN<<"Default constructor called for Animal"<<RESET<<std::endl;
}

Animal::Animal(const Animal& other)
{
    this->type = other.type;
    std::cout<<GREEN<<"Copy constructor called for Animal"<<RESET<<std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout<<"Copy assignment operator of Animal called"<<std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal(void) { std::cout<<RED<<"Destructor called for Animal"<<RESET<<std::endl; }

const std::string&  Animal::getType(void) const { return this->type; }

void    Animal::makeSound(void) const 
{ 
    std::cout<<YELLOW<<"Generic Animal does not have any specific sound"<<RED<<std::endl; 
}
