#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Derived "  << this->_type << " was born." << std::endl;
}

Dog::~Dog(void) 
{
    std::cout << this->_type << " died." << std::endl;
}

Dog::Dog(const Dog & copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog & Dog::operator=(const Dog & copy)
{
    std::cout << "Dog assignement operator called" << std::endl;
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}
