/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:31:13 by adelille          #+#    #+#             */
/*   Updated: 2021/11/29 13:40:05 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#include "../color.hpp"

int	main(int ac, char **av)
{
	std::string	search;
	std::string	replace;
	std::string	output;
	std::string	file;
	
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
	search = av[2];
	replace = av[3];
	if (search.length() < 1 || replace.length() < 1)
		std::cout << C_YELLOW << "Warning: Input shouldn't be an empty string" << std::endl;
	file = (std::string)av[1] + (std::string)".replace";
	//std::cout << file << std::endl;
	//while (getline(ifs, 
	return (0);
}
