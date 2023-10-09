/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:46:39 by adi-fort          #+#    #+#             */
/*   Updated: 2023/10/09 12:09:25 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	if (!this->_weapon)
	{
		std::cout << this->_name << " can only pray";
		std::cout << std::endl;
	}
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	return ;
}
