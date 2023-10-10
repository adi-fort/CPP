#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		~Brain();
		Brain(const Brain& obj);
		Brain&	operator=(const Brain& obj);
		void	setIdea(std::string idea, int i);
		std::string	getIdea(int i) const;
};

#endif 
