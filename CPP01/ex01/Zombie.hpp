/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:24:15 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/31 16:09:17 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
	public:

		Zombie();
		Zombie(std::string name);
		~Zombie();
		
		void	announce(void);
		void	set_name(std::string name);

	private:

		std::string _name;
};
	
Zombie	*zombieHorde(int N, std::string name);

#endif
