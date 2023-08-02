/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:34:08 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/02 12:00:21 by adi-fort         ###   ########.fr       */
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
		
		void	add_contact();
		void	search_contact();
		void	replace_last();
		void	display_contacts();
		void	display_ind_contact();

	private:
		
		Contact	_contacts[8];
};

#endif
