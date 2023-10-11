#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Wrong cat created";
	std::cout << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat destroyed";
	std::cout << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	*this = obj;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	this->type = obj.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongMeows" << std::endl;
}

