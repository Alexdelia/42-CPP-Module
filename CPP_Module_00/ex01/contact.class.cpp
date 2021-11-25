/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/11/25 21:16:03 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include "color.hpp"

contact::contact(void)
{
	_first_name = "";
	_last_name = "";
	_nickname = "";
	_phone_number = "";
	_darkest_secret = "";
}

contact::~contact(void)
{

}

void	contact::add_contact(void)
{
	std::cout << C_BOLD
		<< "Please fill information of contact:" << std::endl
		<< "first name:\t";
	std::getline(std::cin, this->_first_name);
	std::cout << std::endl << "last name:\t";
	std::getline(std::cin, this->_last_name);
	std::cout << std::endl << "nickname:\t";
	std::getline(std::cin, this->_nickname);
	std::cout << std::endl << "phone number:\t";
	std::getline(std::cin, this->_phone_number);
	std::cout << std::endl << "darkest secret:\t";
	std::getline(std::cin, this->_darkest_secret);
	std::cout << C_GREEN << std::endl
		<< "Contact successfully added" << std::endl << C_RESET;
}

static void	print_format(std::string str)
{
	int	i;
	int	len;

	i = -1;
	len = str.length();
	if (len <= 10)
	{
		while (++i < 10 - len)
			std::cout << " ";
		std::cout << str << "|";
	}
	else
	{
		while (++i < 9)
			std::cout << str[i];
		std::cout << ".|";
	}
}

void	contact::print_contact(int full) const
{
	if (full == 0)
	{
		print_format(_first_name);
		print_format(_last_name);
		print_format(_nickname);
		std::cout << std::endl;
	}
	else
	{
		std::cout << "first name:\t" << this->_first_name << std::endl
			<< "last name:\t" << this->_last_name << std::endl
			<< "nickname:\t" << this->_nickname << std::endl
			<< "phone number:\t" << this->_phone_number << std::endl
			<< "darkest secret:\t" << this->_darkest_secret << std::endl;
	}
}
