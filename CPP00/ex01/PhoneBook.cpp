/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:12:26 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/03 17:56:31 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
	return ;
}

~PhoneBook::PhoneBook()
{
	return ;
}

void	add_contact()
{	
	std::string	input;
	this->_index++;
	std::cout << "You have to enter in order: First name, last name, 
	std::cout << "nickname, phone number and darkest secret; then press Enter!"; 
	std::getline(std::cin, input);
	std::getline(std::cin, input);
	std::getline(std::cin, input);
	std::getline(std::cin, input);
	std::getline(std::cin, input);
}

void	replace_string()
{

}

void	display_contacts()
{

}
