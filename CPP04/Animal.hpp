#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream> 

class Animal
{
	protected:
		std::string	type;

	public:
		Animal(std::string type);
		~Animal();



		Animal(const Animal& obj);
		Animal&	operator=(const Animal& obj);

		void	makeSound() const;

		std::string getType(void) const;
};

#endif
