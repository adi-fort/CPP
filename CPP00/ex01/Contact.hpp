/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:53:07 by adi-fort          #+#    #+#             */
/*   Updated: 2023/08/01 12:11:57 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

class Contact {
	public: 
		int index;
		std::string first_name;
		std::string last_name;
		std::string nick_name;
	private:
		std::string nickname;
		std::string darkest_secret;
		int phone_number;
};
#endif
