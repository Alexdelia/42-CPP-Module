/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:38:45 by adelille          #+#    #+#             */
/*   Updated: 2022/01/04 14:42:10 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Default")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const std::string &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &src)
{
	*this = src;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
}

Character	&Character::operator=(const Character &rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		if (rhs._inventory[i] != NULL)
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}

	return (*this);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	this->_inventory[idx] = NULL;
}

void   Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}

const std::string	&Character::getName(void) const
{
	return (this->_name);
}
