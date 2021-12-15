/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/12/15 18:47:46 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap::ClapTrap(), ScavTrap::ScavTrap(), FragTrap::FragTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	setName("Trap");
	_name = getName() + "_clap_name";
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	*this = src;
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap::ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	_name = getName() + "_clap_name";
	std::cout << "DiamondTrap Default constructor called with name: " << getName() << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called for: " << getName() << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs)
{
	std::cout << "Assignment operator called" << std::endl;

	setName(rhs.getName());
	setHitPoints(rhs.getHitPoints());
	setEnergyPoints(rhs.getEnergyPoints());
	setAttackDamage(rhs.getAttackDamage());

	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const DiamondTrap &i)
{
	o	<< "Name:\t" << i.getName() << std::endl
		<< "Hitpoints:\t" << i.getHitPoints() << std::endl
		<< "Energy points:\t" << i.getEnergyPoints() << std::endl
		<< "Attack damage:\t" << i.getAttackDamage() << std::endl;
	return (o);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "DiamondTrap " << getName() << " with ClapTrap name: " << _name << std::endl;
}
