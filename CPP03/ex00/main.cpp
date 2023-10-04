#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap andrea("andrea");
	ClapTrap mario("mario");

	andrea.attack(mario.getName());
	mario.setHealth(mario.getHealth());
	andrea.setHealth(andrea.getHealth());
	mario.beRepaired(1);
	std::cout << andrea.getEnergy() << std::endl << mario.getEnergy() << std::endl;

	return (0);
}
