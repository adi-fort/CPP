#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{	
	Brain b = Brain();
	Brain c = Brain();

	b.setIdea("ciao", 0);
	std::cout << b.getIdea(0);
	std::cout << std::endl;
	
	c = b;
	std::cout << c.getIdea(0);
	std::cout << std::endl;
	
	b.setIdea("daje", 0);
	std::cout << c.getIdea(0);
	std::cout << std::endl;
	std::cout << b.getIdea(0);
	std::cout << std::endl;
	return (0);
}
