#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

#define RED		"\33[1;31m"
#define GREEN	"\33[1;32m" 
#define YELLOW	"\33[1;33m"  
#define BLUE	"\33[1;34m"  
#define RESET	"\33[0;m"

class Brain
{
    public:
        Brain(void);
        Brain(const Brain& other);
        Brain&  operator=(const Brain& other);
        ~Brain(void);

        void    setIdea(int i, const std::string& idea);
        const std::string&  getIdea(int i) const;

    private:
        std::string _ideas[100];
        std::string _noIdea;
};

#endif