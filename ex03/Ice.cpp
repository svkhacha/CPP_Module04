#include "Ice.hpp"

Ice::Ice(void)
{
    this->type = "ice";
    std::cout<<GREEN<<"Default constructor called for Ice"<<RESET<<std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
    this->type = other.type;
    std::cout<<GREEN<<"Copy constructor called for Ice"<<RESET<<std::endl;
}

Ice&    Ice::operator=(const Ice& other)
{
    std::cout<<"Copy assignment operator of Ice called"<<std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

Ice::~Ice(void) { std::cout<<RED<<"Destructor called for Ice"<<RESET<<std::endl; }

Ice*    Ice::clone(void) const { return new Ice(*this); }

void    Ice::use(ICharacter& target)
{
    std::cout<<BLUE<<"* shoots an ice bolt at "<<target.getName()<<RESET<<std::endl;
}