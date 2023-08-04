/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:09:59 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/04 14:48:46 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void	ft_not_number(std::string phone_number)
{
	int i = 0;

	while(std::string[i])
	{
		if (std::string[i] < '0' || std::string[i] > '9') 
		reutn (1);
	}
	return (0);
}

void	trunc_input(std::string input)
{
	int i = 0;
	if (strlen(std::string[i]) > 9)
		std::string[9] = '.';
}
