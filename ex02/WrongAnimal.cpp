#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
    std::cout<<GREEN<<"Default constructor called for WrongAnimal"<<RESET<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    this->type = other.type;
    std::cout<<GREEN<<"Copy constructor called for WrongAnimal"<<RESET<<std::endl;
}

WrongAnimal&    WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout<<"Copy assignment operator of WrongAnimal called"<<std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout<<RED<<"Destructor called for WrongAnimal"<<RESET<<std::endl;
}

const std::string&  WrongAnimal::getType(void) const { return this->type; }

void    WrongAnimal::makeSound(void) const 
{ 
    std::cout<<YELLOW<<"Generic Animal does not have any specific sound"<<RESET<<std::endl; 
}
