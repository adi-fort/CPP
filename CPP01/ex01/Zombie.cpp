/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:31:52 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/31 16:45:46 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	return ;
}

Zombie::Zombie(std::string	name)
{
	this->_name = name;
	return ;
}

Zombie::~Zombie()
{
	std::cout << Zombie::_name << " just died." << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
	return ;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
	return ;
}
