#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class Character : public ICharacter
{
	private:
		AMateria	*inventory[4];


	public:
		Character(std::string name);
		~Character();
		Character(const Character& obj);
		Character&	operator=(const Character& obj);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
}

#endif
