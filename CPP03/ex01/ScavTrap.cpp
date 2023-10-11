#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destroyed" << std::endl;
}

ScavTrap::ScavTrap(std::string str): ClapTrap(str)
{
	std::cout << "ScavTrap created" << std::endl;
	this->setName(_name);
	this->setHealth(100);
	this->setEnergy(50);
	this->setDamage(20);
}

ScavTrap::ScavTrap(ScavTrap& obj) : ClapTrap()
{
	this->_name = obj.getName();
	*this = obj;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	this->_name = obj._name;
	this->_health = obj._health;
	this->_energy = obj._energy;
	this->_damage = obj._damage;
	return (*this);
}


void	ScavTrap::guardGate()
{
	std::cout << this->_name << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getEnergy() > 0 && this->_health > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks "; 
		std::cout << target << " causing points of damage: ";
		std::cout << this->_damage << std::endl;
		this->_energy--;
	}
	else
		std::cout << "ScavTrap has no energy nor health" << std::endl;
}
