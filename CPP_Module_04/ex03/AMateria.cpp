/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:15:07 by adelille          #+#    #+#             */
/*   Updated: 2022/01/04 14:21:36 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _type(type)
{
		//std::cout << typeid(this).name() <<"\tDefault constructor called with type: " << type << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
	//std::cout << typeid(this).name() <<"\tCopy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria(void)
{
	//std::cout << typeid(this).name() <<"\tDestructor called for: " << getType() << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	//std::cout << typeid(this).name() <<"\tAssignment operator called" << std::endl;

	this->_type = rhs.getType();
	
	return (*this);
}

const std::string	&AMateria::getType(void) const
{
	return (this->_type);
}
