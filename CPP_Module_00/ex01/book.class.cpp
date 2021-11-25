/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:49:21 by adelille          #+#    #+#             */
/*   Updated: 2021/11/25 21:21:56 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "book.class.hpp"
#include "color.hpp"

static void	ft_prompt(std::string *command)
{
	std::cout << C_BOLD << "Please enter \""
		<< C_GREEN << "ADD" << C_RESET
		<< C_BOLD << "\", \""
		<< C_CYAN << "SEARCH" << C_RESET
		<< C_BOLD "\" or \""
		<< C_RED << "EXIT" << C_RESET
		<< C_BOLD << "\"" << std::endl;
	std::getline(std::cin, *command);
	std::cout << C_RESET;
}

book::book(void)
{
	std::string	command;

	command = "";
	_nb_contact = 0;
	while (command != "EXIT")
	{
		std::cout << C_RESET << C_BOLD C_FLASH << C_MAGENTA
			<< std::endl << "\tPhonebook8008" << std::endl << C_RESET;
		ft_prompt(&command);
		if (command == "ADD")
		{
			if (_nb_contact >= 8)
				std::cout << C_BOLD << C_RED
					<< "Error: Phonebook8008 is full" << std::endl
					<< C_RESET << C_BOLD
					<< "Phonebook8008 can only hold 8 contacts" << std::endl
					<< C_RESET;
			else
			{
				_contact[_nb_contact].add_contact();
				_nb_contact++;
			}
		}
		else if (command == "SEARCH")
			search_contact();
		else if (command != "EXIT")
			std::cout << C_BOLD << C_RED
				<< "Error: Unknown command" << std::endl << C_RESET;
	}
}

book::~book(void)
{
	std::cout << std::endl << C_BOLD
		<< "Phonebook8008 closing" << std::endl
		<< C_GREEN << "Contact not saved successfully!"
		<< std::endl << std::endl << C_RESET;
}

void	book::search_contact(void)
{
	std::string	index;
	int			i;

	std::cout << C_FLASH << "\t    ✨" << C_RESET << C_BOLD << C_CYAN
		<< "  Phonebook8008 ultimate search  " << C_RESET
		<< C_FLASH << "✨" << C_RESET << std::endl
		<< C_BOLD << "\t|  index   |first name|last name | nickname |" << std::endl;
	i = 0;
	while (i < _nb_contact)
	{
		std::cout << "\t|         " << i << "|";
		_contact[i].contact::print_contact(0);
		i++;
	}
	std::cout << "Please enter index of contact wanted" << std::endl;
	std::getline(std::cin, index);
	i = index[0] - '0';
	if (index[1] != '\0')
		std::cout << C_RED << "Error: Input is not an index" << std::endl;
	else if (i >= 0 && i < _nb_contact)
		_contact[i].contact::print_contact(1);
	else
		std::cout << C_RED << "Error: Input is not an index" << std::endl;
	std::cout << C_RESET;
}
