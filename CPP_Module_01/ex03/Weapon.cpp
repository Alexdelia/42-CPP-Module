/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/11/27 16:19:42 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const & weapon) :
	_type(weapon)
{

}

Weapon::Weapon(void)
{

}

Weapon::~Weapon(void)
{

}

void	Weapon::setType(std::string const & weapon)
{
	_type = weapon;
}

std::string	Weapon::getType(void) const
{
	return (_type);
}
