#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap created" << std::endl;
	this->setName(_name);
	this->setHealth(100);
	this->setEnergy(100);
	this->setDamage(30);
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

void	FragTrap::attack(const std::string& target)
{
	std::cout << this->_name << " attacks " << target;
	std::cout << " causing points of damage: " << this->_damage << std::endl;
	this->_energy--;
}

void	FragTrap::highFivesGuys()
{
	std::cout << this->_name; 
	std::cout << " wanna high five!";
	std::cout << std::endl;
}
