/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:12:39 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/03 16:20:17 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook	phoneBook;
	std::string	input = 0;

	while (input != "EXIT")
	{
		std::cout << "$> ";
		std::getline(std::cin, input); 
		if (input == "ADD")
		{
			add_contact();
			if (phonebook._index > 8)
				replace_first();
		}
		else if (input == "SEARCH")
			dislpay_contacts();
		else 
			std::cout << "error: invalid input\n";
	}
	return (0);
}
