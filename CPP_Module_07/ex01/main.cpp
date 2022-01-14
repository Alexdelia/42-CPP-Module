/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 21:21:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/14 22:12:14 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <iostream>

void	mult(int &i)
{
	i *= 2;
}

void	mult(double &d)
{
	d *= 2;
}

void	print(const char &c)
{
	std::cout << "char is: " << c << std::endl;
}

int	main(void)
{
	// to test the 3 function

	return (0);
}
