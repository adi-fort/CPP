#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap andrea("andrea");
	ClapTrap mario("mario");
	ScavTrap daniele("daniele");
	FragTrap giovanni("A lonely boy");

	andrea.attack(mario.getName());
	mario.setHealth(mario.getHealth() - 30);
	andrea.setEnergy(andrea.getEnergy());
	mario.beRepaired(1);
	std::cout << andrea.getEnergy() << std::endl << mario.getHealth() << std::endl;
	daniele.guardGate();
	daniele.attack("everybody");
	giovanni.highFivesGuys();

	return (0);
}
