/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:05:39 by adelille          #+#    #+#             */
/*   Updated: 2021/11/26 15:36:38 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Zombie.hpp"

int	main(int ac, char **av)
{
	Zombie	*horde;
	int		i;

	if (ac == 3)
	{
		i = atoi(av[1]);
		horde = zombieHorde(i, av[2]);
	}
	else
	{
		i = 3;
		horde = zombieHorde(i, "alex");
	}
	while (--i >= 0)
		horde[i].announce();
	delete [] horde;
	return (0);
}
