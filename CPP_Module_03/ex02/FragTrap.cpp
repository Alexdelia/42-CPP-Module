/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/12/15 18:25:08 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap::ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap Default constructor called with name: " << name << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called for: " << getName() << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "Assignment operator called" << std::endl;

	setName(rhs.getName());
	setHitPoints(rhs.getHitPoints());
	setEnergyPoints(rhs.getEnergyPoints());
	setAttackDamage(rhs.getAttackDamage());

	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const FragTrap &i)
{
	o	<< "Name:\t" << i.getName() << std::endl
		<< "Hitpoints:\t" << i.getHitPoints() << std::endl
		<< "Energy points:\t" << i.getEnergyPoints() << std::endl
		<< "Attack damage:\t" << i.getAttackDamage() << std::endl;
	return (o);
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << getName() << " Let's high fives guys!" << std::endl;
}
