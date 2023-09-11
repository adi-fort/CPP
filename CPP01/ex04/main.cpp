/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:45:48 by adi-fort          #+#    #+#             */
/*   Updated: 2023/09/11 17:55:34 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>

int main(int ac, char	**argv)
{
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
	stream << file.rdbuf();
	buffer = stream.str();
	std::getline(argv[1], argv[2]);
	file1 << buffer;
		

	file1.close();
	file.close();
}
