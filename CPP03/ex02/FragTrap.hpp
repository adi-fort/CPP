#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap& obj);
		FragTrap&	operator=(const FragTrap& obj); 
		~FragTrap();
		
		void	highFivesGuys();
		void	attack(const std::string& target);
};

#endif
