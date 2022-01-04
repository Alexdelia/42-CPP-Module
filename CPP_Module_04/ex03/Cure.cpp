/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:09:40 by adelille          #+#    #+#             */
/*   Updated: 2022/01/04 17:11:38 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{

}

Cure::Cure(const Cure &src) : AMateria(src)
{
	*this = src;
}

Cure::~Cure(void)
{

}

Cure	&Cure::operator=(const Cure &rhs)
{
	AMateria::operator=(rhs);

	return (*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}
