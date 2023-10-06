#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
}

Dog::~Dog()
{
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	*this = obj;
}

Dog&	Dog::operator=(const Dog& obj)
{
	this->type = obj.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "barks";
	std::cout << std::endl;
}
