/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:34:08 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/04 17:35:18 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp" 

class PhoneBook 
{
	public:
		
		PhoneBook();
		~PhoneBook();

		void	add_contact();
		void	display_contacts();
		int		get_index() const;

	private:
		
		Contact	_contacts[8];
		int		_index;
};

#endif
