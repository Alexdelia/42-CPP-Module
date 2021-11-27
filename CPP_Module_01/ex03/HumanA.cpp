/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/11/27 16:27:12 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const & name, Weapon & weapon) :
	_name(name), _weapon(weapon)
{

}

HumanA::~HumanA(void)
{

}

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
