/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/12/14 17:57:01 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called with name: " << name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called for: " << this->_name << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "Assignment operator called" << std::endl;

	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();

	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const ClapTrap &i)
{
	o	<< "Name:\t" << i.getName() << std::endl
		<< "Hitpoints:\t" << i.getHitPoints() << std::endl
		<< "Energy points:\t" << i.getEnergyPoints() << std::endl
		<< "Attack damage:\t" << i.getAttackDamage() << std::endl;
	return (o);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has 0 energyPoints left" << std::endl;
}

void	ClapTrap::takeDamage(int amount)
{
	if (amount < 0)
		return ;
	std::cout << "ClapTrap " << this->_name << " takes " << amount
		<< " points of damage!" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
}

void	ClapTrap::beRepaired(int amount)
{
	if (amount < 0)
		return ;
	std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << std::endl;
	this->_hitPoints += amount;
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

int ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void ClapTrap::setName(const std::string &name)
{
	this->_name = name;
}

void ClapTrap::setHitPoints(const int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(const int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(const int attackDamage)
{
	this->_attackDamage = attackDamage;
}
