#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; ++i)
        this->_materia[i] = NULL;
    std::cout<<GREEN<<"Default constructor called for MateriaSource"<<RESET<<std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    for (int i = 0; i < 4; ++i)
        this->_materia[i] = other._materia[i]->clone();
    std::cout<<GREEN<<"Copy constructor called for MateriaSource"<<RESET<<std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; ++i)
            if (this->_materia[i] != NULL)
            {
                delete this->_materia[i];
                this->_materia[i] = NULL;
            }
        for (int i = 0; i < 4; ++i)
            if (other._materia[i] != NULL)
                this->_materia[i] = other._materia[i]->clone();
        std::cout<<"Copy assignment of MateriaSource called"<<std::endl;
        return *this;
    }
     std::cout<<"Copy assignment of MateriaSource called"<<std::endl;
        return *this;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; ++i)
    {
        if (this->_materia[i] != NULL)
        {
            delete this->_materia[i];
            this->_materia[i] = NULL;
        }
    }
    std::cout<<RED<<"Destructor called for MateriaSource"<<RESET<<std::endl;
}

void    MateriaSource::learnMateria(AMateria* m)
{
    if (m != NULL)
    {
        for (int i = 0; i < 4; ++i)
        {
            if (this->_materia[i] == NULL)
            {
                this->_materia[i] = m;
                std::cout<<YELLOW<<"MateriaSource learned"<<RESET<<std::endl;
                return ; 
            }
        }
    }
    std::cout<<"MateriaSource can't learn"<<std::endl;
}

AMateria*   MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (this->_materia[i] && type.compare(this->_materia[i]->getType()) == 0)
            return this->_materia[i]->clone();
    }
    return NULL;
}
