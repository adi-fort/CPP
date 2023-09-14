# include <string>
# include <iostream>
# include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	if (ac != 2)
	{
		std::cout << "Error: wrong number of parameter" << std::endl;
		return (1);
	}
	std::string level = av[1];
	if (level != "debug" && level != "info" && level != "warning" && level
		!= "error")
	{
		std::cout << "Error: enter a valid complain level" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}
