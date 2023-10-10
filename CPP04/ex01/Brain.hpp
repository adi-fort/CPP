#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain
{
	private:
		std::string [100]ideas;

	public:
		Brain();
		~Brain();
		Brain(const Brain& obj);
		Brain&	operator=(const Brain& obj);
		void	setIdea(std::string idea, int i);
		std::string	getIdea(int i) const;
};

#endif 
