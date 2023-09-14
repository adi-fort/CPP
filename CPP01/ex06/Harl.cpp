# include "Harl.hpp"

# include <string>
# include <iostream>

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*fn_levels[120])();

	fn_levels[100] = &Harl::debug;
	fn_levels[105] = &Harl::info;
	fn_levels[119] = &Harl::warning;
	fn_levels[101] = &Harl::error;

	(this->*(fn_levels[(int)level[0]]))();
	switch (level[0]) 
	{
		case 'w':
		{
			(this->*(fn_levels[101]))();
			break ;
		}
		case 'i':
		{		
			(this->*(fn_levels[119]))();
			(this->*(fn_levels[101]))();
			break ;
		}
		case 'd':
		{
			(this->*(fn_levels[105]))();
			(this->*(fn_levels[119]))();
			(this->*(fn_levels[101]))();
			break ;
		}
	}
}
