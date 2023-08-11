#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main( void )
{
	Animal	*animals[8];


	std::cout << "\n------------> Test 1 <------------\n" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (i < 8 / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}

	std::cout << "\n------------> Test 2 <------------\n" << std::endl;
	animals[3]->makeSound();
	animals[6]->makeSound();

	std::cout << "\n------------> Test 3 <------------\n" << std::endl;
	std::cout << "Type: " << animals[2]->getType() << std::endl;
	std::cout << "Type: " << animals[6]->getType() << std::endl;

	std::cout << "\n------------> Test 4 <------------\n" << std::endl;
	*(animals[5]) = *(animals[7]);
	Animal x(*(animals[5]));

	std::cout << "\n------------> Test 9 <------------\n" << std::endl;
	Cat tmp;
	Cat y(tmp);
	Dog tmpaz;
	Dog z(tmpaz);
	std::cout << "\n\n\n\n" << std::endl;

	for (int i = 0; i < 8; i++)
		delete animals[i];
	std::cout << "\n\n\n\n" << std::endl;
	
}