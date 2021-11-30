/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:22:19 by adelille          #+#    #+#             */
/*   Updated: 2021/11/30 17:25:40 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen	Karen;
	
	if (ac == 2)
	{
		Karen.complain(av[1]);
		return (0);
	}

	Karen.complain("DEBUG");
	Karen.complain("INFO");
	Karen.complain("WARNING");
	Karen.complain("ERROR");
	std::cout << std::endl;
	Karen.complain("debug");
	Karen.complain("");

	return (0);
}
