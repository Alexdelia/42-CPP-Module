/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/12/07 12:41:52 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed(void) : _fix(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int i) : _fix(0)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fix = i << this->_bits;
}

Fixed::Fixed(const float f) : _fix(0)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fix = int(roundf(f * (1 << this->_bits)));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignment operator called" << std::endl;

	if (this != &rhs)
		this->_fix = rhs.getRawBits();
	
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fix);
}

void	Fixed::setRawBits(const int raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_fix = raw;
}

std::ostream	&operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return (o);
}

float	Fixed::toFloat(void) const
{
	return (double(this->_fix) / double(1 << this->_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_fix >> this->_bits);
}
