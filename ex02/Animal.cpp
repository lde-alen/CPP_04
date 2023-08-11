#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
    std::cout << this->_type << " was born." << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << this->_type << " was born." << std::endl;
}

Animal::~Animal(void)
{
    std::cout << this->_type << " died." << std::endl;
}

Animal::Animal(const Animal & copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal & Animal::operator=(const Animal & copy)
{
    std::cout << "Animal assignement operator called" << std::endl;
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

void Animal::makeSound(void) const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

