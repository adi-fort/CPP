/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:12:26 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/04 12:09:27 by adi-fort         ###   ########.fr       */
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
	std::cout << "You have to enter in order: First name, last name, ";
	std::cout << "nickname, phone number and darkest secret. "; 
	std::cout << "Don't forget to press Enter after every input!\n";
	std::getline(std::cin, input);
	if (!input)
		exit(1);
	this->_contacts[this->_index].set_first_name(input);
	std::getline(std::cin, input);
	if (!input)
		exit(1);
	this->_contacts[this->_index].set_last_name(input);
	std::getline(std::cin, input);
	if (!input)
		exit(1);
	this->_contacts[index]->_index.set_nick_name(input);
	std::getline(std::cin, input);
	if (!input)
		exit(1);
	this->contacts[index]->_index.set_phone_number(input);
	std::getline(std::cin, input);
	if (!input)
		exit(1);
	this->contacts[index]->_index.set_darkest_secret(input);
	std::cout << "Contact succesfully added!"
}

void	replace_first()
{
	if (this->_index == 8)
		this->_contacts[8] == this->_Contact[0];
}

void	display_contacts()
{
	
}
