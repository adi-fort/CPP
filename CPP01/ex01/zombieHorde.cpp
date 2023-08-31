/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:31:32 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/31 16:41:09 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *horde;
	int	i = 0;
	
	horde = new Zombie[N];
	while (i < N) 
	{
		horde[i].set_name(name);
		horde->announce();
		i++;
	}
	return (horde);
}
