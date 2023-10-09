#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap created" << std::endl;
	this->setName(name);
	this->setHealth(10);
	this->setEnergy(10);
	this->setDamage(0);
}

ClapTrap::ClapTrap(ClapTrap& obj)
{
	std::cout << "Default copy constructor called" << std::endl;
	this->_name = obj.getName();
	*this = obj;
}

ClapTrap::~ClapTrap()
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

void	ClapTrap::setName(const std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHealth(unsigned int health)
{
	this->_health = health;
}

void	ClapTrap::setEnergy(unsigned int energy)
{
	this->_energy = energy;
}

void	ClapTrap::setDamage(unsigned int damage)
{
	this->_damage = damage;
}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHealth() const
{
	return (this->_health);
}

unsigned int	ClapTrap::getEnergy() const
{
	return (this->_energy);
}

unsigned int	ClapTrap::getDamage() const
{
	return (this->_damage);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy > 0 && this->_health > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " 
		<< target << " causing points of damage: " << this->_damage <<
		std::endl;
		this->_energy--;
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
