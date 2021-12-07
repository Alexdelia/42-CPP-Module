/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:37:26 by adelille          #+#    #+#             */
/*   Updated: 2021/12/07 14:54:28 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

#define	RED		"\033[1;31m"
#define	GREEN	"\033[1;32m"
#define RESET	"\033[0m"

static void	compare(bool bsp, bool expected)
{
	if (bsp == expected)
		std::cout << GREEN << "[OK]" << RESET << std::endl;
	else
		std::cout << RED << "[KO]" << RESET << std::endl;
}

int main(void)
{
	Point	a(4, 6);
	Point	b(6, 2);
	Point	c(2, 2);
	Point	p1(4, 4);
	Point	p2(10, 10);

	compare(bsp(a, b, c, p1), true);
	compare(bsp(a, b, c, p2), false);
	
	compare(bsp(a, b, c, a), false);
	compare(bsp(a, b, c, b), false);
	compare(bsp(a, b, c, c), false);
	return (0);
}
