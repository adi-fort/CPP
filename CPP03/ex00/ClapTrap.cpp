#include "ClapTrap.hpp"
#include <iostream>

ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap(std::string name)
{
	std::string << "ClapTrap created" << st::endl;
	this->_name = name;
	this->setHealth(10);
	this->setEnergy(10);
	this->setDamage(0);
}

ClapTrap(ClapTrap& obj)
{
	std::cout << "Default copy constructor called" << std::endl;
	this->_name = name;
	*this = obj;
}

~ClapTrap()
{
	std::cout << "Default destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	if (this != &obj)
	{
		this->setName(obj.getName());
		this->setHealth(obj.getHealth());
		this->setEnergy(obj.getEnergy());
		this->setDamage(obj.getDamage());
		return (*this);
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy > 0 && this->health > 0)
	{
		std::cout << "ClapTrap" << this->_name << "attacks"  << target << "causing points of damage: " << this->_damage << std::endl;
		ClapTrap::target.setHealth(getHealt() - this->_damage);
		this->setHealth(this->getHealth() - 1);
	}
	else
		std::cout << "ClapTrap has no energy nor health" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->setHealth(this->getHealth() - amount);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health < 10)
		this->setHealth(this->getHealth() + amount);
}
