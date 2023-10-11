#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class	AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(std::string const&	type);
		~AMateria();
		AMateria(const AMateria& obj);
		AMateria&	operator=(const AMateria& obj);

		std::string	const& getType() const; //returns the materia type

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
