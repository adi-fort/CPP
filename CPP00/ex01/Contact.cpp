/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:12:11 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/03 16:16:15 by adi-fort         ###   ########.fr       */
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



