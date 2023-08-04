/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:12:39 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/04 16:11:22 by adi-fort         ###   ########.fr       */
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
	PhoneBook	phoneBook; //PhoneBook é la classe; phoneBook é istanza
	std::string	input = "";
	while (input != "EXIT")
	{
		std::cout << "$> ";
		std::getline(std::cin, input); 
		if (input == "ADD")
		{
			phoneBook.add_contact();
			if (phoneBook.get_index() > 8)
				phoneBook.replace_first();
		}
		else if (input == "SEARCH")
			phoneBook.display_contacts();
		else 
			std::cout << "error: invalid input\n";
	}
	return (0);
}
