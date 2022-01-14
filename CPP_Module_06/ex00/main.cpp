/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:14:41 by adelille          #+#    #+#             */
/*   Updated: 2022/01/14 12:22:45 by adelille         ###   ########.fr       */
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
		if (isdigit(str[i]))
			;
		else if (str[i] == '.')
		{
			if (p == false)
				p = true;
			else
				return (false);
		}
		else if (str[i] == 'f')
		{
			if (!str[i + 1])
				return (true);
			else
				return (false);
		}
		else
			return (false);
		i++;
	}
	return (true);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << ERROR << "should have 1 arguments" << std::endl
			<< "./convert [ARG]" << std::endl
			<< "(ARG can be char, int, float or double)" << std::endl;
		return (1);
	}
	if (!parse(av[1]))
	{
		std::cerr << ERROR << av[1] << " can't be converted" << std::endl;
		return (2);
	}
	convert(av[1]);
	return (0);
}
