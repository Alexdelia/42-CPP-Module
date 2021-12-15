/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/12/14 17:57:31 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _guard(false)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap::ClapTrap(name), _guard(false)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Default constructor called with name: " << name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called for: " << getName() << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "Assignment operator called" << std::endl;

	setName(rhs.getName());
	setHitPoints(rhs.getHitPoints());
	setEnergyPoints(rhs.getEnergyPoints());
	setAttackDamage(rhs.getAttackDamage());
	setGuardGate(rhs.getGuardGate());

	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const ScavTrap &i)
{
	o	<< "Name:\t" << i.getName() << std::endl
		<< "Hitpoints:\t" << i.getHitPoints() << std::endl
		<< "Energy points:\t" << i.getEnergyPoints() << std::endl
		<< "Attack damage:\t" << i.getAttackDamage() << std::endl;
	return (o);
}

void	ScavTrap::attack(const std::string &target)
{
	if (getEnergyPoints() > 0)
	{
		std::cout << "ScavTrap " << getName() << " attacks " << target
			<< ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << "ScavTrap " << getName() << " has 0 energyPoints left" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	this->_guard = true;
	std::cout << "ScavTrap " << getName() << " have entered Gate keeper mode" << std::endl;
}

bool	ScavTrap::getGuardGate(void) const
{
	return (this->_guard);
}

void	ScavTrap::setGuardGate(const bool status)
{
	this->_guard = status;
}
