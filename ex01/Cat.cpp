#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Derived "  << this->_type << " was born." << std::endl;
    this->_brain = new Brain();
}

Cat::~Cat(void)
{
    std::cout << "Derived "  << this->_type << " died." << std::endl;
    delete this->_brain;
}

Cat::Cat(const Cat & copy) : Animal(copy.getType())
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat & Cat::operator=(const Cat & copy)
{
    std::cout << "Cat assignement operator called" << std::endl;
    if (this != &copy)
    {
        this->_type = copy._type;
        this->_brain = new Brain(*copy._brain);
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}
