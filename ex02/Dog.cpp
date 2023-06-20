#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    this->_dogBrain = new Brain();
    std::cout<<GREEN<<"Default constructor called for Dog"<<RESET<<std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
    this->_dogBrain = new Brain();
    std::cout<<GREEN<<"Copy constructor called for Dog"<<RESET<<std::endl;
}

Dog&    Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        this->type = other.type;
        delete this->_dogBrain;
        this->_dogBrain = new Brain();
        for (int i = 0; i < 100; ++i)
        _dogBrain->setIdea(i, other._dogBrain->getIdea(i));
        std::cout<<"Copy assignment operator of Dog called"<<std::endl;
        return *this;
    }
    std::cout<<"Copy assignment operator of Dog called"<<std::endl;
    return *this;
}

Dog::~Dog(void)
{
    delete this->_dogBrain;
    std::cout<<RED<<"Destructor called for Dog"<<RESET<<std::endl;
}


void    Dog::makeSound(void) const
{
    std::cout<<YELLOW<<"🐕 woof - woof"<<RESET<<std::endl;
}