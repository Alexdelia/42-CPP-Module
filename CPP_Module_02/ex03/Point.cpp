/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:28:59 by adelille          #+#    #+#             */
/*   Updated: 2021/12/07 14:45:50 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{

}

Point::Point(const float &x, const float &y) : _x(x), _y(y)
{

}

Point::Point(const Point &src)
{
	*this = src;
}

Point::~Point(void)
{

}

Fixed Point::getX(void) const
{
	return this->_x;
}

Fixed Point::getY(void) const
{
	return this->_y;
}

Point	&Point::operator=(Point const &rhs)
{
	this->_x = rhs.getX();
	this->_y = rhs.getY();
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Point const &f)
{
	o << "[" << f.getX() << "|" << f.getY() << "]";
	return o;
}
