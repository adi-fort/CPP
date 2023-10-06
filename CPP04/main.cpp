#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

int main()
{
	const Animal	*p = new Animal("Pig");
	const Animal	*h = new Animal("Horse");
	const Animal	*d = new Dog();
	const Animal	*c = new Cat();
		
	std::cout << "----------" << std::endl;
	std::cout << "----------" << std::endl;
	std::cout << p->getType() << " ";
	p->makeSound();
	std::cout << std::endl;
	std::cout << "----------" << std::endl;
	std::cout << h->getType() << " ";
	h->makeSound();
	std::cout << std::endl;
	std::cout << "----------" << std::endl;
	std::cout << d->getType() << " ";
	d->makeSound();
	std::cout << std::endl;
	std::cout << "----------" << std::endl;	
	std::cout << c->getType() << " ";
	c->makeSound();
	std::cout << std::endl;
	
	return (0);
}
