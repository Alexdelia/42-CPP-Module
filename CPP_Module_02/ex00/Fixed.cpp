/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/12/07 11:51:45 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.cpp"

Fixed::Fixed(void) : _fix(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/*Fixed::Fixed(const int n) : _fix(n);
{
	std::cout << "Copy constructor called" << std::endl;
}*/

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	getRawBits(void) const
{
	std::cout << this->_fix << std::endl;
}

void	setRawBits(const int raw)
{
	this->_fix = raw;
	//std::cout << _fix << std::endl;
}
