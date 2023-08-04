/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:12:26 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/04 16:16:21 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

int		PhoneBook::get_index() const
{
	return (this->_index);
}

void	PhoneBook::add_contact()
{	
	std::string	input;
	this->_index++;
	std::cout << "You have to enter in order: First name, last name, ";
	std::cout << "nickname, phone number and darkest secret. "; 
	std::cout << "Don't forget to press Enter after every input!\n";
	std::getline(std::cin, input);
	if (!input)
		exit(1);
	trunc_input(input);
	this->_contacts[this->_index].set_first_name(input);
	std::getline(std::cin, input);
	if (!input)
		exit(1);
	trunc_input(input);
	this->_contacts[this->_index].set_last_name(input);
	std::getline(std::cin, input);
	if (!input)
		exit(1);
	trunc_input(input);
	this->_contacts[this->_index]->_index.set_nick_name(input);
	std::getline(std::cin, input);
	if (!input)
		exit(1);
	trunc_input(input);
	this->contacts[this->_index]->_index.set_phone_number(input);
	std::getline(std::cin, input);
	if (!input)
		exit(1);
	trunc_input(input);
	this->contacts[this->_index]->_index.set_darkest_secret(input);
	std::cout << "Contact succesfully added!"
}

void	PhoneBook::replace_first()
{
	if (this->_index == 8)
		this->_contacts[8] == this->_Contact[0];
}

void	PhoneBook::display_contacts()
{
	int i = 1;
	int ind_input = 0;
	std::string input;
	while (i <= this->_index)
	{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->_index
		std::cout << " | ";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->_contacts[this->_index].get_first_name();
		std::cout << " | " ;
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->_contacts[this->_index].get_last_name();
		std::cout << " | " ;
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->_contacts[this->_index].get_nick_name();
		std::cout << " | " ;
		std::cout << std::endl;
		std::cout << std::endl;
		i++;
		if (i == 8)
			break ;
	}
	std::cout << "$> Insert index: "
	std::getline(std::cin, ind_input);
	if (ind_input < 1 || ind_input > 8)
	{
		std::cout << "Invalid input"
		exit(1);
	}
	else
	{
		this->_index = ind_input;
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->_contacts[this->_index].get_first_name();
		std::cout << std::endl;
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->_contacts[this->_index].get_last_name();
		std::cout << std::endl;
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->_contacts[this->_index].get_nick_name();
		std::cout << std::endl;
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->_contacts[this->_index].get_phone_number();
		std::cout << std::endl;
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->_contacts[this->_index].get_darkest_secret();
		std::cout << std::endl;
	}
}
