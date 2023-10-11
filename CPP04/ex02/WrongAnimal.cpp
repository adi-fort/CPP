# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Wrong animal  created" << std::endl;
	this->type = type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong animal destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	*this = obj;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	this->type = obj.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "make wrong noise";
	std::cout << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
