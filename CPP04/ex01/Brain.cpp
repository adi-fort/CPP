#include "Brain.hpp"

Brain::Brain()
{}

Brain::~Brain()
{}

Brain::Brain(const Brain& obj)
{
	for  (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
}

Brain&	Brain::operator=(const Brain& obj)
{
	for (int i= 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

void	Brain::setIdea(std::string idea, int i)
{
	this->ideas[i] = idea;
}

std::string	Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}
