#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

class WrongAnimal
{
	protected:
		std::string type;
	
	public:
		WrongAnimal(std::string type);
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& obj);
		WrongAnimal&	operator=(const WrongAnimal& obj);

		virtual void	makeSound() const;
		std::string		getType() const;
}

#endif
