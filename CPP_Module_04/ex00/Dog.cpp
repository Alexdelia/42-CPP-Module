/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 18:28:06 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal::Animal("Dog")
{
	std::cout << typeid(this).name() <<"\tDefault constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
	*this = src;
	std::cout << typeid(this).name() <<"\tCopy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << typeid(this).name() <<"\tDestructor called for: " << getType() << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	std::cout << typeid(this).name() <<"\tAssignment operator called" << std::endl;

	setType(rhs.getType());
	
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Dog &src)
{
	o	<< "Type:\t" << src.getType() << std::endl;
	return (o);
}

void	Dog::makeSound(void) const
{
	std::cout << getType() << "\t*Bark*" << std::endl;
}
