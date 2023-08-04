/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:12:26 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/04 17:44:02 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"
#include <cstdlib>

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
	std::cout << "Enter first name: " ;
	std::getline(std::cin, input);
	if (!input[0])
		exit(1);
	this->_contacts[this->_index].set_first_name(input);
	std::cout << "Enter last name: " ;
	std::getline(std::cin, input);
	if (!input[0])
		exit(1);
	this->_contacts[this->_index].set_last_name(input);
	std::cout << "Enter nick name: " ;
	std::getline(std::cin, input);
	if (!input[0])
		exit(1);
	this->_contacts[this->_index].set_nick_name(input);
	std::cout << "Enter phone number (only numbers): " ;
	std::getline(std::cin, input);
	if (!input[0])
		exit(1);
	this->_contacts[this->_index].set_phone_number(input);
	std::cout << "Enter the darkest secret: " ;
	std::getline(std::cin, input);
	if (!input[0])
		exit(1);
	this->_contacts[this->_index].set_darkest_secret(input);
	std::cout << "Contact succesfully added!\n" ;
	this->_index++;
	if (this->_index == 8)
		this->_index = 0;
}

void	PhoneBook::display_contacts()
{
	int i = 0;
	int ind_input = 0;
	std::string input;
	std::string input_index_char;
	while (i < this->_index)
	{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << i + 1 ;
		std::cout << " | " ;
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << trunc_input(this->_contacts[i].get_first_name());
		std::cout << " | " ;
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << trunc_input(this->_contacts[i].get_last_name());
		std::cout << " | " ;
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << trunc_input(this->_contacts[i].get_nick_name());
		std::cout << " | " ;
		std::cout << std::endl;
		i++;
		if (i == 8)
			break ;
	}
	std::cout << "$> Insert index: " ;
	std::getline(std::cin, input_index_char);
	ind_input = atoi(input_index_char.c_str());
	if (ind_input < 1 || ind_input >= this->_index + 1)
	{
		std::cout << "Invalid input" ;
		exit(1);
	}
	else
	{
		ind_input-- ;
		std::cout << this->_contacts[ind_input].get_first_name();
		std::cout << std::endl;
		std::cout << this->_contacts[ind_input].get_last_name();
		std::cout << std::endl;
		std::cout << this->_contacts[ind_input].get_nick_name();
		std::cout << std::endl;
		std::cout << this->_contacts[ind_input].get_phone_number();
		std::cout << std::endl;
		std::cout << this->_contacts[ind_input].get_darkest_secret();
		std::cout << std::endl;
	}
}
