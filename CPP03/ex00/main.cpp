#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap	andrea;
	ClapTrap	mario;

	andrea.attack(ClapTrap::mario);
	andrea.attack(ClapTrap::mario);
	mario.beRepaired(3);
	
	return (0);
}
