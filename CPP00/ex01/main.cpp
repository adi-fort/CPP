/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:12:39 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/04 17:35:50 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "utils.hpp"
#include <iostream>
#include <string>
#include <iomanip>

int	main()
{
	PhoneBook	phoneBook;
	std::string	input = "";
	std::cout << "Hi, i am a Crappy Old Phone Book." ;
	std::cout << "You can only input ADD, SEARCH or EXIT!\n" ;
	while (input != "EXIT")
	{
		std::cout << "$> ";
		std::getline(std::cin, input); 
		if (input == "ADD")
			phoneBook.add_contact();
		else if (input == "SEARCH")
			phoneBook.display_contacts();
		else if (input == "EXIT")
			;
		else 
			std::cout << "error: invalid input\n";
	}
	return (0);
}
