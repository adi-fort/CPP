#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main()
{
	const Animal	*p = new Animal("Mammal");
	const Animal	*h = new Animal("Vertebrate");
	const Animal	*d = new Dog();
	const Animal	*c = new Cat();
	
	const WrongAnimal	*w = new WrongAnimal("Petaurus");
	const WrongAnimal	*wc = new WrongCat();

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

	std::cout << "----------" << std::endl;	
	std::cout << w->getType() << " ";
	w->makeSound();
	std::cout << "----------" << std::endl;	
	
	std::cout << wc->getType() << " ";
	wc->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;
	
	delete p;
	delete h;
	delete d;
	delete c;
	delete w;
	delete wc;
	
	return (0);
}
