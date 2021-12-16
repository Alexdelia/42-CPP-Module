/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 18:33:28 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal::WrongAnimal("WrongCat")
{
	std::cout << typeid(this).name() <<"\tDefault constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;
	std::cout << typeid(this).name() <<"\tCopy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << typeid(this).name() <<"\tDestructor called for: " << getType() << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << typeid(this).name() <<"\tAssignment operator called" << std::endl;

	setType(rhs.getType());
	
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const WrongCat &src)
{
	o	<< "Type:\t" << src.getType() << std::endl;
	return (o);
}

void	WrongCat::makeSound(void) const
{
	std::cout << getType() << "\t*wrong Meow*" << std::endl;
}
