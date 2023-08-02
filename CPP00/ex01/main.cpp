/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:12:39 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/02 11:52:44 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"
#include "Contact.h"

int	main()
{
	PhoneBook	PhoneBook;
	std::string	input = 0;

	while (input != "EXIT")
	{
		std::cout << "$> ";
		if (input == "ADD")
			add_info();
		else if (input == "SEARCH")
		{
			dislpay_contacts();
				if (search_index())
					display_index();
		}
		else 
			std::cout << "error: invalid input\n";
	}
	return (0);
}
