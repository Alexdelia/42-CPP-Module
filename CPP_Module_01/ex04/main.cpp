/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:31:13 by adelille          #+#    #+#             */
/*   Updated: 2021/11/30 17:32:57 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
//#include <string>

#include "../color.hpp"

std::string	sed(std::string input, std::string search, std::string replace)
{
	std::string	output;
	int			i;
	int			x;
	int			y;
	int			o;

	i = 0;
	o = 0;
	while (input[i])
	{
		x = i;
		y = 0;
		while (search[y] && input[x] && search[y] == input[x])
		{
			x++;
			y++;
		}
		if (!search[y])
		{
			i = x - 1;
			y = 0;
			while (replace[y])
			{
				output += replace[y];
				o++;
				y++;
			}
		}
		else
			output += input[i];
		i++;
	}
	return (output);
}

int	main(int ac, char **av)
{
	std::string	file;
	std::string	search;
	std::string	replace;
	std::string	tmp;
	std::string	output;
	
	if (ac != 4)
	{
		std::cout << C_RED << C_BOLD << "Error: Wrong number of arguments"
			<< std::endl << C_RESET
			<< "Usage: ./replace [file] [string to search] [string to replace]"
			<< std::endl << C_RESET;
		return (1);
	}
	std::ifstream	ifs(av[1]);
	if (!ifs.is_open())
	{
		std::cout << C_RED << C_BOLD << "Error: " << av[1]
			<< " failed to open" << std::endl << C_RESET;
		return (2);
	}
	search = av[2];
	replace = av[3];
	if (!search.length() || !replace.length())
		std::cout << C_YELLOW << "Warning: Input shouldn't be an empty string"
			<< std::endl << C_RESET;
	file = (std::string)av[1] + (std::string)".replace";
	while (getline(ifs, tmp))
	{
		output += tmp;
		if (!ifs.eof())
			output += "\n";
	}
	if (search.length())
		output = sed(output, search, replace);
	std::ofstream	ofs(file.c_str());
	ofs << output;
	return (0);
}
