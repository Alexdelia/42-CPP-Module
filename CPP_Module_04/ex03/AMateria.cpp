/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:15:07 by adelille          #+#    #+#             */
/*   Updated: 2022/01/04 14:32:37 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _type(type)
{

}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

AMateria::~AMateria(void)
{

}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	this->_type = rhs.getType();
	
	return (*this);
}

const std::string	&AMateria::getType(void) const
{
	return (this->_type);
}
