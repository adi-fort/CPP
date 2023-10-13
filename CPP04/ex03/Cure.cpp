#include "Cure.hpp"

Cure::Cure() 
{
	this->type = setType("cure");
}

Cure::~Cure() {}

Cure::Cure(Cure& obj)
{
	*this = obj;
}

Cure&	operator=(Cure& obj)
{
	*this = obj;
	return (*this);
}

Cure*	Cure::clone()
{
	Cure*	cubeclone;
	return(cubeclone);
}

void	use(ICharacter& target)
{
	std::cout << "* heals " << target << "'s wounds *" << std::endl; 
}
