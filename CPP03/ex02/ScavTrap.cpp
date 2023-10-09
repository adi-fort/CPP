#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
}

ScavTrap::~ScavTrap()
{	
	std::cout << "ScavTrap destroyed" << std::endl;
}

ScavTrap::ScavTrap(std::string str): ClapTrap(str)
{	
	std::cout << "ScavTrap created" << std::endl;
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

