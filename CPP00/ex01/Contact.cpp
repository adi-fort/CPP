/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:12:11 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/03 17:14:06 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact();
{
	 this->_first_name = 0;
	 this->_last_name = 0;
	 this->_nick_name = 0;
	 this->_phone_number = 0;
	 this->_darkest_secret = 0;
	 return ;
}

Contact::~Contact();
{
	return ;
}

void	set_first_name(std::string first_name)
{
	this ->_first_name = first_name;
	return ;
}

void	set_last_name(std::string last_name)
{
	this ->_last_name = last_name;
	return ;
}

void	set_nick_name(std::string last_name)
{
	this ->_nick_name = last_name;
	return ;
}

void	set_phone_number(std::string phone_number)
{
	this ->_phone_number = phone_number;
	return ;
}

void	set_darkest_secret(std::string darkest_secret)
{
	this ->_darkest_secret = darkest_secret;
	return ;
}

std::string	Contact::get_first_name() const
{
	return (this->first_name);
}

std::string	Contact::get_last_name() const
{
	return (this->last_name);
}

std::string	Contact::get_nick_name() const
{
	return (this->nick_name);
}

std::string	Contact::get_phone_number() const
{
	return (this->phone_number);
}

std::string	Contact::get_darkest_secret() const
{
	return (this->darkest_secret();
}
