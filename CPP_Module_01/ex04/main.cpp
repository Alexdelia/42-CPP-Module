/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:31:13 by adelille          #+#    #+#             */
/*   Updated: 2021/11/27 16:38:18 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../color.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 4)
	{
		std::cout << C_RED << C_BOLD << "Error: Wrong number of arguments" << std::endl << C_RESET
			<< "Usage: ./Sed_is_for_losers [file] [string to search] [string to replace]" << std::endl;
		return (1);
	}
}
