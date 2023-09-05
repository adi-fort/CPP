/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:46:03 by adi-fort          #+#    #+#             */
/*   Updated: 2023/09/01 15:33:56 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iomanip>
# include <string>
# include <iostream>

class	HumanA 
{
	private: 
		
		Weapon &_weapon; //_weapon é una reference 
		std::string _name;

	public:
		
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
}; 

#endif
