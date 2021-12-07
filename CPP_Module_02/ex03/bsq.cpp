/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:32:57 by adelille          #+#    #+#             */
/*   Updated: 2021/12/07 14:33:25 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//https://stackoverflow.com/questions/13300904/determine-whether-point-lies-inside-triangle

bool bsp( Point const p1, Point const p2, Point const p3, Point const point) {
	Fixed alpha = ((p2.getY() - p3.getY())*(point.getX() - p3.getX()) + (p3.getX() - p2.getX())*(point.getY() - p3.getY()))
		/ ((p2.getY() - p3.getY())*(p1.getX() - p3.getX()) + (p3.getX() - p2.getX())*(p1.getY() - p3.getY()));
	Fixed beta = ((p3.getY() - p1.getY())*(point.getX() - p3.getX()) + (p1.getX() - p3.getX())*(point.getY() - p3.getY()))
		/ ((p2.getY() - p3.getY())*(p1.getX() - p3.getX()) + (p3.getX() - p2.getX())*(p1.getY() - p3.getY()));
	Fixed gamma = Fixed(1.0f) - alpha - beta;
	if (alpha > 0 && beta > 0 && gamma > 0)
		return true;
	return false;
}
