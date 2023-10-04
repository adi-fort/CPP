#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class	ScavTrap : public ClapTrap
{	
	public:
		ScavTrap();
		ScavTrap(ScavTrap& obj);
		ScavTrap& operator=(const ScavTrap& obj);
		~ScavTrap();

		void	guardGate();
};

#endif
