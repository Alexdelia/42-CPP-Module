/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 21:18:49 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal::Animal("Dog"), _brain(new Brain())
{
	std::cout << typeid(this).name() <<"\tDefault constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src), _brain(new Brain(*src._brain))
{
	*this = src;
	std::cout << typeid(this).name() <<"\tCopy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << typeid(this).name() <<"\tDestructor called for: " << getType() << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	delete _brain;
	_brain = new Brain(*rhs._brain);
	setType(rhs.getType());
	
	std::cout << typeid(this).name() <<"\tAssignment operator called" << std::endl;
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

Brain	*Dog::getBrain(void) const
{
	return (_brain);
}
