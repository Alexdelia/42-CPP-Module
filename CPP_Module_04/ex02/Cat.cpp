/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 21:11:03 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal::Animal("Cat"), _brain(new Brain)
{
	std::cout << typeid(this).name() <<"\tDefault constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src), _brain(new Brain(*src._brain))
{
	*this = src;
	std::cout << typeid(this).name() <<"\tCopy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << typeid(this).name() <<"\tDestructor called for: " << getType() << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	delete _brain;
	_brain = new Brain(*rhs._brain);
	setType(rhs.getType());
	
	std::cout << typeid(this).name() <<"\tAssignment operator called" << std::endl;
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

Brain	*Cat::getBrain() const
{
	return (_brain);
}
