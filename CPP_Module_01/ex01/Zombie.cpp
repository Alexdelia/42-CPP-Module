/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/11/26 15:54:26 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string const & name) :
	_name(name)
{
	announce();
}

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
	std::cout << "<" << _name << ">\thBraHahuuhhh... x.x" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << _name << ">\tBraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string const & name)
{
	Zombie::_name = name;
}
