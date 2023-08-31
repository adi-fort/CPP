/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:39:42 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/31 16:46:28 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

int main()
{
	Zombie	*zombs;

	zombs = zombieHorde(10, "A walking dead");
	delete [] zombs;
	return (0);
}
