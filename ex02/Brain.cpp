#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor:";
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = "idea";
	}
	std::cout << std::endl;
}

Brain::Brain(Brain const &other)
{
	std::cout << "Brain copy constructor:" << std::endl;
	*this = other;
}

Brain &Brain::operator=(Brain const &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = other.getIdea(i);
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain tumor" << std::endl;
}

std::string const &Brain::getIdea(int index) const
{
	return this->ideas[index];
}
