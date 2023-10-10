#include "Animal.hpp"

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}

Animal::Animal(const Animal& obj)
{
	*this = obj;
}

Animal&	Animal::operator=(const Animal& obj)
{
	this->type = obj.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "makes some noise";
	std::cout << std::endl;
}

std::string Animal::getType() const 
{
	return (this->type);
}
