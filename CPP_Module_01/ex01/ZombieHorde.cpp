/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:05:35 by adelille          #+#    #+#             */
/*   Updated: 2021/11/26 15:44:05 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	
	Zombie				*horde = new Zombie[N];
	int					i;

	i = 0;
	while (i < N)
	{
		{
			std::ostringstream	ss;
			ss << i;
			horde[i].set_name(name + ss.str());
		}
		i++;
	}
	return (horde);
}
