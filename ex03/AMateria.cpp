#include "AMateria.hpp"

AMateria::AMateria(void) : type("")
{
    std::cout<<GREEN<<"Default constructor called for AMateria"<<RESET<<std::endl;
}

AMateria::AMateria(std::string const& t)
{
    this->type = t;
    std::cout<<GREEN<<"Constructor with parameter called for AMateria"<<RESET<<std::endl;
}

AMateria::AMateria(const AMateria& other)
{
    this->type = other.type;
    std::cout<<GREEN<<"Copy constructor called for AMateria"<<RESET<<std::endl;
}

AMateria&   AMateria::operator=(const AMateria& other)
{
    std::cout<<"Copy assignment operator of AMateria called"<<std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

AMateria::~AMateria(void) { std::cout<<RED<<"Destructor called for AMateria"<<RESET<<std::endl; }

std::string const&  AMateria::getType(void) const { return this->type; }

void    AMateria::use(ICharacter& target) { (void)target; }