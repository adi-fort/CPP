/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:09:59 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/04 15:45:35 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int		ft_not_number(std::string phone_number)
{
	int i = 0;

	while(phone_number[i])
	{
		if (phone_number[i] < '0' || phone_number[i] > '9') 
			return (1);
	}
	return (0);
}

void	trunc_input(std::string input)
{
	int i = 0;
	if ((int)input.length() > 9)
		input[9] = '.';
}
