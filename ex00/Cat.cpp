#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Derived " << this->_type << " was born." << std::endl;
}

Cat::~Cat(void)
{
    std::cout << this->_type << " died." << std::endl;
}

Cat::Cat(const Cat & copy) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat & Cat::operator=(const Cat & copy)
{
    std::cout << "Cat assignement operator called" << std::endl;
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}