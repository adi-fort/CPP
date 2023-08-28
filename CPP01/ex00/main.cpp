/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:19:37 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/28 17:23:24 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

int main()
{
	Zombie	*romero;
	Zombie	*fulci;

	romero = newZombie("George Romero");
	fulci = newZombie("Lucio Fulci");
	randomChump("Bub");
	randomChump("Don");
	delete (romero);
	delete (fulci);
	return (0);
}
