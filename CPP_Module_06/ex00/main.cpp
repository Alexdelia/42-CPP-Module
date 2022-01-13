/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:14:41 by adelille          #+#    #+#             */
/*   Updated: 2022/01/13 22:56:48 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

static bool	parse(const std::string &str)
{
	int		i;
	bool	p;

	if (is_special(str) || is_printable_char(str))
		return (true);
	i = 0;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
		i++;
	p = false;
	while (str[i])
	{
		if (!(isdigit(str[i]) || str[i] == 'f' || str[i] == '.'))
			return (false);
		if (str[i] == '.' && p == false)
			p = true;
		else
			return (false);
		if (str[i] == 'f' && str[i + 1])
			return (false);
		i++;
	}
	return (true);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: should have 1 arguments" << std::endl
			<< "./convert [ARG]" << std::endl
			<< "(ARG can be char, int, float or double)" << std::endl;
		return (1);
	}
	if (!parse(av[1]))
	{
		std::cerr << "Error: " << av[1] << " can't be converted" << std::endl;
		return (2);
	}
	convert(av[1]);
	return (0);
}
