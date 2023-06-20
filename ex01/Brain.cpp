#include "Brain.hpp"

Brain::Brain(void) : _noIdea("")
{
    for (int i = 0; i < 100; ++i)
    this->_ideas[i] = "";
    std::cout<<GREEN<<"Default constructor called for Brain"<<RESET<<std::endl;
}

Brain::Brain(const Brain& other)
{
    this->_noIdea = other._noIdea;
    for (int i = 0; i < 100; ++i)
    this->_ideas[i] = other._ideas[i];
    std::cout<<GREEN<<"Copy constructor called for Brain"<<RESET<<std::endl;
}

Brain&  Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        this->_noIdea = other._noIdea;
        for (int i = 0; i < 100; ++i)
        this->_ideas[i] = other._ideas[i];
        std::cout<<"Copy assignment operator of Brain called"<<std::endl;
        return *this;
    }
    std::cout<<"Copy assignment operator of Brain called"<<std::endl;
    return *this;
}

Brain::~Brain(void) { std::cout<<RED<<"Destructor called for Brain"<<RESET<<std::endl; }

void    Brain::setIdea(int i, const std::string& idea)
{
    if (i >= 0 && i < 100)
        this->_ideas[i] = idea;
}

const std::string&  Brain::getIdea(int i) const
{
    if (i >= 0 && i < 100)
        return this->_ideas[i];
    else
        return this->_noIdea;
}