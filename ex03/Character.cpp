#include "Character.hpp"

Character::Character(void)
{
    this->_name = "";
    for (int i = 0; i < 4; ++i)
    this->_slot[i] = NULL;
    std::cout<<GREEN<<"Default constructor called for Character"<<RESET<<std::endl;
}

Character::Character(std::string const& name)
{
    this->_name = name;
    for (int i = 0; i < 4; ++i)
    this->_slot[i] = NULL;
    std::cout<<GREEN<<"Constructor with parameter called for Character"<<RESET<<std::endl;
}

Character::Character(const Character& other)
{
    this->_name = other._name;
    for (int i = 0; i < 4; ++i)
    {
        if (other._slot[i] != NULL)
            this->_slot[i] = other._slot[i]->clone();
        else
            this->_slot[i] = NULL;
    }
    std::cout<<GREEN<<"Copy constructor called for Character"<<RESET<<std::endl;
}

Character&  Character::operator=(const Character& other)
{
    if (this != &other)
    {
        this->_name = other._name;
        for (int i = 0; i < 4; ++i)
        {
            if (this->_slot[i] != NULL)
            {
                delete this->_slot[i];
                this->_slot[i] = NULL;
            }
        }
        for (int i = 0; i < 4; ++i)
        {
            if (other._slot[i] != NULL)
                this->_slot[i] = other._slot[i]->clone();
            this->_slot[i] = NULL;
        }
        std::cout<<"Copy assignment operator of Character called"<<std::endl;
        return *this;
    }
     std::cout<<"Copy assignment operator of Character called"<<std::endl;
    return *this;
}

Character::~Character(void)
{
    for (int i = 0; i < 4; ++i)
    {
        if (this->_slot[i] != NULL)
        {
            delete this->_slot[i];
            this->_slot[i] = NULL;
        }
    }
    std::cout<<RED<<"Destructor called for Character"<<RESET<<std::endl;
}

std::string const&  Character::getName(void) const { return this->_name; }

void    Character::equip(AMateria* m)
{
    if (m != NULL)
    {
        for (int i = 0; i < 4; ++i)
        {
            if (this->_slot[i] == NULL)
            {
                this->_slot[i] = m;
                std::cout<<YELLOW<<"Character "<<this->_name;
                std::cout<<" equipped with "<<m->getType()<<RESET<<std::endl;
                return ;
            }
        }
    }
    std::cout<<"Character "<<this->_name;
    std::cout<<" can't equip"<<std::endl;
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && this->_slot[idx] != NULL)
    {
        this->_slot[idx] = NULL;
        std::cout<<YELLOW<<"Character "<<this->_name;
        std::cout<<" unequipped"<<RESET<<std::endl;
        return ;
    }
    std::cout<<"Character "<<this->_name;
    std::cout<<" can't unequip"<<std::endl;
    return ;
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && this->_slot[idx] != NULL)
    {
        this->_slot[idx]->use(target);
        std::cout<<BLUE<<"Character "<<this->_name;
        std::cout<<" uses "<<this->_slot[idx]->getType()<<RESET<<std::endl;
    }
    else
        std::cout<<"There is nothing to use at this index"<<std::endl;
}