#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap andrea("andrea");
	std::cout << "------------------" << std::endl;
	ClapTrap mario("mario");
	std::cout << "------------------" << std::endl;
	ScavTrap daniele("daniele");
	std::cout << "------------------" << std::endl;
	FragTrap giovanni("giovanni");
	std::cout << "------------------" << std::endl;

	andrea.attack(mario.getName());
	daniele.guardGate();
	daniele.attack("everybody");
	giovanni.attack("nobody");
	giovanni.highFivesGuys();

	return (0);
}
