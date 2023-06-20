#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("AAnimal")
{
    std::cout<<GREEN<<"Default constructor called for AAnimal"<<RESET<<std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
    this->type = other.type;
    std::cout<<GREEN<<"Copy constructor called for AAnimal"<<RESET<<std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    std::cout<<"Copy assignment operator of AAnimal called"<<std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

AAnimal::~AAnimal(void) { std::cout<<RED<<"Destructor called for AAnimal"<<RESET<<std::endl; }

const std::string&  AAnimal::getType(void) const { return this->type; }

