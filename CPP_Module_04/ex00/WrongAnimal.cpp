/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 18:27:42 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << typeid(this).name() <<"\tDefault constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
	std::cout << typeid(this).name() <<"\tCopy constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
	std::cout << typeid(this).name() <<"\tDefault constructor called with type: " << type << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	//std::cout << "WrongAnimal\tDestructor called for: " << getType() << std::endl;
	std::cout << typeid(this).name() <<"\tDestructor called for: " << getType() << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << typeid(this).name() <<"\tAssignment operator called" << std::endl;

	setType(rhs.getType());
	
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const WrongAnimal &src)
{
	o	<< "Type:\t" << src.getType() << std::endl;
	return (o);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << getType() << "\t*wrong noise*" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(const std::string &type)
{
	this->_type = type;
}
