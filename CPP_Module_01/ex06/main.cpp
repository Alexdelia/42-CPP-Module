/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:22:19 by adelille          #+#    #+#             */
/*   Updated: 2021/12/01 11:19:42 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen		Karen;
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;
	
	if (ac != 2)
	{
		Karen.complain("");
		return (0);
	}

	i = -1;
	while (++i < 4)
		if (levels[i] == av[1])
			break ;

	switch(i)
	{
		case (0):
			Karen.complain("DEBUG");
		case (1):
			Karen.complain("INFO");
		case (2):
			Karen.complain("WARNING");
		case (3):
		{
			Karen.complain("ERROR");
			break ;
		}
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

	return (0);
}
