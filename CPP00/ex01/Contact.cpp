/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:12:11 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/04 18:00:19 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "utils.hpp"
#include <iostream> 

Contact::Contact()
{
	 this->_first_name = "";
	 this->_last_name = "";
	 this->_nick_name = "";
	 this->_phone_number = "";
	 this->_darkest_secret = "";
	 return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::set_first_name(std::string first_name)
{
	this ->_first_name = first_name;
	return ;
}

void	Contact::set_last_name(std::string last_name)
{
	this ->_last_name = last_name;
	return ;
}

void	Contact::set_nick_name(std::string nick_name)
{
	this ->_nick_name = nick_name;
	return ;
}

void	Contact::set_phone_number(std::string phone_number)
{
	if (ft_not_number(phone_number)) {
		std::cout << "Told Ya! Bye!\n" ;
		exit (1); }
	this ->_phone_number = phone_number;
	return ;
}

void	Contact::set_darkest_secret(std::string darkest_secret)
{
	this ->_darkest_secret = darkest_secret;
	return ;
}

std::string	Contact::get_first_name() const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name() const
{
	return (this->_last_name);
}

std::string	Contact::get_nick_name() const
{
	return (this->_nick_name);
}

std::string	Contact::get_phone_number() const
{
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret() const
{
	return (this->_darkest_secret);
}
