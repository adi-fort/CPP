/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:12:39 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/04 11:44:15 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

//la classe é il set di istruzione che definisce gli oggetti.

int	main()
{
	PhoneBook	phoneBook; //PhoneBook é la classe; phoneBook é istanza
	std::string	input = 0;

	while (input != "EXIT")
	{
		std::cout << "$> ";
		std::getline(std::cin, input); 
		if (input == "ADD")
		{
			phoneBook.add_contact();
			if (phonebook._index > 8)
				phoneBook.replace_first();
		}
		else if (input == "SEARCH")
			dislpay_contacts();
		else 
			std::cout << "error: invalid input\n";
	}
	return (0);
}
