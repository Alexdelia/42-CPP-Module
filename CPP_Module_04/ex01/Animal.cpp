/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 18:27:51 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << typeid(this).name() <<"\tDefault constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
	std::cout << typeid(this).name() <<"\tCopy constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << typeid(this).name() <<"\tDefault constructor called with type: " << type << std::endl;
}

Animal::~Animal(void)
{
	//std::cout << "Animal\tDestructor called for: " << getType() << std::endl;
	std::cout << typeid(this).name() <<"\tDestructor called for: " << getType() << std::endl;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	std::cout << typeid(this).name() <<"\tAssignment operator called" << std::endl;

	setType(rhs.getType());
	
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Animal &src)
{
	o	<< "Type:\t" << src.getType() << std::endl;
	return (o);
}

void	Animal::makeSound(void) const
{
	std::cout << getType() << "\t*noise*" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(const std::string &type)
{
	this->_type = type;
}
