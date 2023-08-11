#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
    std::cout << this->_type << " was born." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << this->_type << " was born." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << this->_type << " died." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & copy)
{
    std::cout << "WrongAnimal assignement operator called" << std::endl;
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}
