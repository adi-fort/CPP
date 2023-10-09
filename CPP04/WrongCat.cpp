#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(std::string name)
{}

WrongCat::~WrongCat()
{}

WrongCat::WrongCat(const WrongCat& obj)
{
	*this = obj;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	this->type = obj.type;
	return (*this);
}

void	makeSound() const
{
	std::cout << "WrongMeows" << std::endl;
}

