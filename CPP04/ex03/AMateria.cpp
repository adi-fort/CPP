#include "AMateria.hpp"
#include <iostream>
#include <string>

AMateria::AMateria(std::string const& type)
{
	std:::cout << "AMateria constructor called" << std::endl; 
	this->_type = type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& obj)
{
	*this = obj;
}

AMateria&	AMateria::operator=(const AMateria& obj)
{
	this->_type = obj.type;
	return (*this);
}

std::string const&	AMateria::getType() const
{
	return (*this->_type);
}

void	use(ICharacter& target)
{
	std::cout << "I do not know what to do" << std::endl;
}
