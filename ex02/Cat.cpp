#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    this->_catBrain = new Brain();
    std::cout<<GREEN<<"Default constructor called for Cat"<<RESET<<std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
    this->_catBrain = new Brain();
    std::cout<<GREEN<<"Copy constructor called for Cat"<<RESET<<std::endl;
}

Cat&    Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        this->type = other.type;
        delete this->_catBrain;
        this->_catBrain = new Brain();
        for (int i = 0; i < 100; ++i)
        _catBrain->setIdea(i, other._catBrain->getIdea(i));
        std::cout<<"Copy assignment operator of Cat called"<<std::endl;
        return *this;
    }
    std::cout<<"Copy assignment operator of Cat called"<<std::endl;
    return *this;
}

Cat::~Cat(void) 
{
    delete this->_catBrain;
    std::cout<<RED<<"Destructor called for Cat"<<RESET<<std::endl; 
}

void    Cat::makeSound(void) const 
{
    std::cout<<YELLOW<<"🐱 meooow - meooow"<<RESET<<std::endl;
}