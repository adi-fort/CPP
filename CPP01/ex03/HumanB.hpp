/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:46:13 by adi-fort          #+#    #+#             */
/*   Updated: 2023/09/01 17:09:06 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iomanip>
# include <string>
# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon *_weapon; //qui ora weapon é un puntatore(puó essere NULL)
		std::string _name;
	
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &_weapon); //sto settando arma passandola come argomento per reference
};

#endif
