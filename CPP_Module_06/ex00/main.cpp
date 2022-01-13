/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:14:41 by adelille          #+#    #+#             */
/*   Updated: 2022/01/13 19:20:40 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

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
