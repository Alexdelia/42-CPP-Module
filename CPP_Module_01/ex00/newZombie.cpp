/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:18:51 by adelille          #+#    #+#             */
/*   Updated: 2021/11/26 14:29:12 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie::Zombie	z(name);
	Zombie::Zombie	*p;

	p = (Zombie::Zombie *)malloc(sizeof(Zombie::Zombie));
	if (!p)
		return (NULL);
	p = &z;
	return (p);
}
