/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:32:39 by adi-fort          #+#    #+#             */
/*   Updated: 2023/09/01 16:47:13 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string	const &Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string newtype)
{
	this->_type = newtype;
}
