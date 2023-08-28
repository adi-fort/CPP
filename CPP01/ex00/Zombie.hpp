/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:21:44 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/28 17:19:37 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie 
{	
	public:

		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
	
	private:

		std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
