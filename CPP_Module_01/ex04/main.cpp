/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:31:13 by adelille          #+#    #+#             */
/*   Updated: 2021/11/29 13:32:43 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#include "../color.hpp"

int	main(int ac, char **av)
{
	std::string		search;
	std::string		replace;
	
	(void)av;
	if (ac != 4)
	{
		std::cout << C_RED << C_BOLD << "Error: Wrong number of arguments" << std::endl << C_RESET
			<< "Usage: ./replace [file] [string to search] [string to replace]" << std::endl;
		return (1);
	}
	std::ifstream	ifs(av[1]);
	if (!ifs.is_open())
	{
		std::cout << C_RED << C_BOLD << "Error: " << av[1] << " failed to open" << std::endl;
		return (2);
	}
	return (0);
}
