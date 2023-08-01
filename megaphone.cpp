#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int i;
	int j = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else if (argc > 1)	
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i])
			{	
				std::cout << (char)toupper((int)argv[j][i]);
				i++;
			}
			j++;
		}
	}
	std::cout << std::endl;
	return (0);
}
