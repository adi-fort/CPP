#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice& obj);
		Ice& operator=(Ice& obj);

		Ice	clone();
		void	use(ICharacter&);
};

#endif
