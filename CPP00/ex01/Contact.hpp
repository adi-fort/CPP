/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:53:07 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/04 16:03:50 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
	
	public:
		Contact();
		~Contact();
		void	set_first_name(std::string first_name);
		void	set_last_name(std::string last_name);
		void	set_nick_name(std::string nick_name);
		void	set_phone_number(std::string phone_number);
		void	set_darkest_secret(std::string darkest_secret);
		std::string	get_first_name() const;
		std::string	get_last_name() const;
		std::string	get_nick_name() const;
		std::string	get_darkest_secret() const;
		std::string	get_phone_number() const;

	private: 
		std::string _first_name;
		std::string _last_name;
		std::string _nick_name;
		std::string _darkest_secret;
		std::string	_phone_number;
};
#endif
