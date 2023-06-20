#include "Cure.hpp"

Cure::Cure(void)
{
    this->type = "cure";
    std::cout<<GREEN<<"Default constructor called for Cure"<<RESET<<std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other) 
{
    this->type = other.type;
    std::cout<<GREEN<<"Copy constructor called for Cure"<<RESET<<std::endl;
}

Cure&    Cure::operator=(const Cure& other)
{
    std::cout<<"Copy assignment operator of Cure called"<<std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

Cure::~Cure(void) { std::cout<<RED<<"Destructor called for Cure"<<RESET<<std::endl; }

Cure*    Cure::clone(void) const { return new Cure(*this); }

void    Cure::use(ICharacter& target)
{
    std::cout<<BLUE<<"* heals "<<target.getName()<<"’s wounds *"<<RESET<<std::endl;
}