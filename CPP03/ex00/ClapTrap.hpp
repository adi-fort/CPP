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

		void	setName(const std::string& _name);
		void	setHealth(unsigned int _health);
		void	setEnergy(unsigned int _energy);
		void	setDamage(unsigned int _damage);
		
		const std::string&	getName() const;
		unsigned int		getHealth() const;
		unsigned int		getEnergy() const;
		unsigned int		getDamage() const;

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
