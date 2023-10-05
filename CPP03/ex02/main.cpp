#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap andrea("andrea");
	ClapTrap mario("mario");
	ScavTrap daniele("daniele");

	andrea.attack(mario.getName());
	mario.setHealth(mario.getHealth());
	andrea.setHealth(andrea.getHealth());
	mario.beRepaired(1);
	std::cout << andrea.getEnergy() << std::endl << mario.getEnergy() << std::endl;
	daniele.guardGate();
	daniele.attack("stocazzo");

	return (0);
}
