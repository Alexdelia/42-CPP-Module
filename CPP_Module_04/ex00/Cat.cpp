/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 18:27:59 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal::Animal("Cat")
{
	std::cout << typeid(this).name() <<"\tDefault constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
	*this = src;
	std::cout << typeid(this).name() <<"\tCopy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << typeid(this).name() <<"\tDestructor called for: " << getType() << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	std::cout << typeid(this).name() <<"\tAssignment operator called" << std::endl;

	setType(rhs.getType());
	
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Cat &src)
{
	o	<< "Type:\t" << src.getType() << std::endl;
	return (o);
}

void	Cat::makeSound(void) const
{
	std::cout << getType() << "\t*Meow*" << std::endl;
}
