/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/12/14 18:09:42 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(void)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FlagTrap Default constructor called" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &src)
{
	*this = src;
	std::cout << "FlagTrap Copy constructor called" << std::endl;
}

FlagTrap::FlagTrap(const std::string &name) : ClapTrap::ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FlagTrap Default constructor called with name: " << name << std::endl;
}

FlagTrap::~FlagTrap(void)
{
	std::cout << "FlagTrap Destructor called for: " << getName() << std::endl;
}

FlagTrap	&FlagTrap::operator=(const FlagTrap &rhs)
{
	std::cout << "Assignment operator called" << std::endl;

	setName(rhs.getName());
	setHitPoints(rhs.getHitPoints());
	setEnergyPoints(rhs.getEnergyPoints());
	setAttackDamage(rhs.getAttackDamage());

	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const FlagTrap &i)
{
	o	<< "Name:\t" << i.getName() << std::endl
		<< "Hitpoints:\t" << i.getHitPoints() << std::endl
		<< "Energy points:\t" << i.getEnergyPoints() << std::endl
		<< "Attack damage:\t" << i.getAttackDamage() << std::endl;
	return (o);
}

void	FlagTrap::highFivesGuys(void) const
{
	std::cout << "FlagTrap " << getName() << " Let's high fives guys!" << std::endl;
}
