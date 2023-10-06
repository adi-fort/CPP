#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

int main()
{
	Animal	animale = Animal("");
	Dog		cane = Dog();

	animale.makeSound();
	cane.makeSound();
	animale = cane;
	std::cout << animale.getType() << std::endl;
	return (0);
}

