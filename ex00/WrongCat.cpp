#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout<<GREEN<<"Default constructor called for WrongCat"<<RESET<<std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout<<GREEN<<"Copy constructor called for WrongCat"<<RESET<<std::endl;
}

WrongCat&   WrongCat::operator=(const WrongCat& other)
{
    std::cout<<"Copy assignment operator of WrongCat called"<<std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout<<RED<<"Destructor called for WrongCat"<<RESET<<std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout<<YELLOW<<"🐱 meooow - meooow"<<RESET<<std::endl;
}