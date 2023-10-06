#include "Cat.hpp"
#include "Animal.hpp"

#include <string>
#include <iostream>

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat created";
	std::cout << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed";
	std::cout << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	*this=obj;
}

Cat&	Cat::operator=(const Cat& obj)
{
	this->type = obj.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "meows";
	std::cout << std::endl;
}
