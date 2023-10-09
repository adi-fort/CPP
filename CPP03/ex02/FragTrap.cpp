#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destroyed" << std::endl;
}

FragTrap::FragTrap(FragTrap& obj) : ClapTrap()
{
	*this = obj;
}

FragTrap&	FragTrap::operator=(const FragTrap& obj)
{
	this->_name = obj._name;
	this->_health = obj._health;
	this->_energy = obj._energy;
	this->_damage = obj._damage;
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << this->_name; 
	std::cout << " wanna high fives babe!";
	std::cout << std::endl;
}
