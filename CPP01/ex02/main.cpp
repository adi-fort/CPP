/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:01:31 by adi-fort          #+#    #+#             */
/*   Updated: 2023/10/09 11:52:01 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string string;						//variable
	std::string	*stringPTR = &string;		//pointer to variable
	std::string &stringREF = string;		//reference to variable

	string = "HI THIS IS BRAIN";		
	
	std::cout << "string memory address: ";
	std::cout << &string << std::endl;		//memory address string
	std::cout << std::endl;	
	std::cout << "pointer to memory address -> ";
	std::cout << stringPTR << std::endl;	//memory address pointer
	std::cout << std::endl;	
	std::cout << "reference memory address: ";
	std::cout << &stringREF << std::endl;	//memory address reference
	std::cout << std::endl;	
	std::cout << "value stored in string: ";
	std::cout << string << std::endl;		//value stored in string
	std::cout << std::endl;	
	std::cout << "pointer to variable string: ";
	std::cout << *stringPTR << std::endl;	//value pointed by pointer with *
	std::cout << std::endl;	
	std::cout << "reference to variable string: ";
	std::cout << stringREF << std:: endl;	//value pointed by ref.
	
	return (0);
}
