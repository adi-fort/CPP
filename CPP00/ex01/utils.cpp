/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:09:59 by adi-fort          #+#    #+#             */
/*   Updated: 2023/09/14 12:26:09 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int		ft_not_number(std::string phone_number)
{
	int i = 0;

	while(i < (int)phone_number.size())
	{
		if (phone_number[i] < '0' || phone_number[i] > '9') 
			return (1);
		i++;
	}
	return (0);
}

std::string	trunc_input(std::string input)
{
	if ((int)input.length() > 9) {
		input[9] = '.';
		input.resize(10);
	}
	return (input) ;
}
