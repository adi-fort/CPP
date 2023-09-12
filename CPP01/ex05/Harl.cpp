# include "Harl.hpp"
# include <iomainp>
# include <string>

Harl::Harl(void)
{
	return :
}

Harl::~Harl(void)
{
	return;
}

void	debug(void)
{
	std::cout << "I love having extra bacon." << endl;
}

void	info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." << endl;
}

void	warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free" << endl;
}

void	error(void)
{
	std::cout << "I want to speak to the manager now." << enld;
}

void	complain(std::string level)
{
	void Harl::*fn_levels[4]();

	fn_level[0] = &Harl::debug();
	fn_level[1] = &Harl::info();
	fn_level[2] = &Harl::warning();
	fn_level[3] = &Harl::error();

	
}
