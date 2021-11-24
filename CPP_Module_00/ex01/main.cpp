/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:30:46 by adelille          #+#    #+#             */
/*   Updated: 2021/11/24 14:54:04 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "contact.class.hpp"

void	ft_init_contact(contact	*book)
{
	contact	c;

	if (contact::get_nb_contact() <= 8)
		book[contact::get_nb_contact()] = c;
}

int	main(int ac, char **av)
{
	contact	*book;

	(void)ac;
	(void)av;
	// EXIT -> exit
	// ADD -> call user to input:
	//		first name, last name, nickname, phone number, darkest secret.

	book = (contact *)malloc(sizeof(contact) * 8);
	if (!book)
		return (1);
	std::cout << contact::get_nb_contact() << std::endl;
	ft_init_contact(book);
	std::cout << contact::get_nb_contact() << std::endl;
	free(book);
	std::cout << contact::get_nb_contact() << std::endl;
	return (0);
}
