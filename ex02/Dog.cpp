#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Derived " << this->_type << " was born." << std::endl;
    this->_brain = new Brain();
}

Dog::~Dog(void) 
{
    std::cout << "Derived "  << this->_type << " died." << std::endl;
    delete this->_brain;
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
    {
        this->_type = copy._type;
        this->_brain = new Brain(*copy._brain); // should this be a deep or shallow copy???
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}
