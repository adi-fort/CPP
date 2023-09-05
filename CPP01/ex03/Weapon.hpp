/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:45:49 by adi-fort          #+#    #+#             */
/*   Updated: 2023/09/01 16:50:54 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iomanip>
# include <string>
# include <iostream>

class	Weapon
{
	private:
		
		std::string _type;

	public:
		
		Weapon(std::string type);
		~Weapon();
		std::string const &getType();
		void	setType(std::string newtype);
} ;

#endif
