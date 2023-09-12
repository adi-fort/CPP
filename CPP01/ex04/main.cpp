/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:45:48 by adi-fort          #+#    #+#             */
/*   Updated: 2023/09/12 15:18:42 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>

int main(int ac, char	**argv)
{
	size_t	len;
	std::string buffer;
	std::stringstream stream;
	std::ifstream file(argv[1]);
	std::string a = argv[1];
	std::ofstream file1(a + ".replace");
	if (ac != 4)
	{
		std::cout << "Error: incorrect number of parameters" << std::endl;
		return (1);
	}
	std::string changestr = argv[2];
	len = changestr.length();
	stream << file.rdbuf();
	buffer = stream.str();
	size_t pos = buffer.find(argv[2]);
	if (argv[2] == argv[3])
	{	
		file1 << buffer;
		file1.close();
		file.close();
		return (0);
	}
	while (pos != std::string::npos)
	{
		buffer.erase(pos, len);
		buffer.insert(pos, argv[3]);
		pos = buffer.find(argv[2]);
	}
	file1 << buffer;
	file1.close();
	file.close();
	return (0);
}
