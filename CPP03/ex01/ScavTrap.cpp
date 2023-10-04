#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
}

ScavTrap::~ScavTrap()
{
}

ScavTrap::ScavTrap(ScavTrap& obj)
{
	this->_name = obj._name;
	*this = obj;
}

ScavTrap::ScavTrap&	operator=(const ScavTrap& obj)
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

