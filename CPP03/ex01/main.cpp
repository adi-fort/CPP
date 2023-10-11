#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap andrea("andrea");
	ClapTrap mario("mario");
	
	ScavTrap daniele("daniele");

	andrea.attack(mario.getName());
	mario.takeDamage(1);
	mario.setHealth(mario.getHealth());
	andrea.setHealth(andrea.getHealth());
	mario.beRepaired(1);
	std::cout << andrea.getEnergy() << std::endl << mario.getEnergy() << std::endl;
	
	daniele.guardGate();
	daniele.attack("himself");
	daniele.takeDamage(20);
	std::cout << daniele.getHealth();
	std::cout << std::endl;
	daniele.beRepaired(5);
	std::cout << daniele.getHealth();
	std::cout << std::endl;
	return (0);
}
