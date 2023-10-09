#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class	FragTrap : private ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap& obj);
		FragTrap&	operator=(const FragTrap& obj); 
		~FragTrap();
		
		void	highFivesGuys();
};

#endif
