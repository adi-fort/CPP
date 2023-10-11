#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class	ScavTrap : public ClapTrap
{	
	public:
		ScavTrap();
		ScavTrap(std::string str);
		ScavTrap(ScavTrap& obj);
		ScavTrap& operator=(const ScavTrap& obj);
		~ScavTrap();

		void	guardGate();
		void	attack(const std::string& target);
};

#endif
