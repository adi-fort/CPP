#include "Ice.hpp"

Ice::Ice() 
{
	this->type = setType("ice");
}

Ice::~Ice() {}

Ice::Ice(Ice& obj)
{
	*this = obj;
}

Ice&	operator=(Ice& obj)
{
	*this = obj;
	return (*this);
}

Ice*	Ice::clone()
{
	Ice*	iceclone;
	return(iceclone);
}

void	use(ICharacter& target)
{
	std::cout << "* shoots an ice blot at " << target << std::endl; 
}
