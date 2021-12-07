/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:26:23 by adelille          #+#    #+#             */
/*   Updated: 2021/12/07 14:45:35 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(const float &x, const float &y);
		Point(const Point &src);
		~Point(void);

		Point	&operator=(const Point &rhs);

		Fixed	getX(void) const;
		Fixed	getY(void) const;

	private:
		Fixed		_x;
		Fixed		_y;
};

std::ostream	&operator<<(std::ostream &o, const Point &f);
bool			bsp(Point const a, Point const b, Point const c, Point const point);

#endif
