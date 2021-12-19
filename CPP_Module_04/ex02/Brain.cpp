/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 20:48:30 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	int	i;

	i = -1;
	while (++i < 100)
		_ideas[i] = "";
	std::cout << typeid(this).name() <<"\tDefault constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
	std::cout << typeid(this).name() <<"\tCopy constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << typeid(this).name() <<"\tDestructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &rhs)
{
	std::cout << typeid(this).name() <<"\tAssignment operator called" << std::endl;

	int	i;

	i = -1;
	while (++i < 100)
		_ideas[i] = rhs._ideas[i];
	return (*this);
}
