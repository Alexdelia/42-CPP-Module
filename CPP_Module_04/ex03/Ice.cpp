/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:09:40 by adelille          #+#    #+#             */
/*   Updated: 2022/01/04 17:26:12 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{

}

Ice::Ice(const Ice &src) : AMateria(src)
{
	*this = src;
}

Ice::~Ice(void)
{

}

Ice	&Ice::operator=(const Ice &rhs)
{
	AMateria::operator=(rhs);

	return (*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}
