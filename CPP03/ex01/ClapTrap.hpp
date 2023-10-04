#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		
		std::string		_name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_damage;

	public:
		
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& obj);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& obj);

		void	setName(const std::string name);
		void	setHealth(unsigned int health);
		void	setEnergy(unsigned int energy);
		void	setDamage(unsigned int damage);
		
		std::string			getName() const;
		unsigned int		getHealth() const;
		unsigned int		getEnergy() const;
		unsigned int		getDamage() const;

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
