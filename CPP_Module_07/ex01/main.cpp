/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 21:21:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/15 12:44:57 by adelille         ###   ########.fr       */
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
	{
		int	arr[] = {1, 2, 3, 4, 42};

		print(arr, 5);
		iter(arr, 5, mult);
		print(arr, 5);
	}
	std::cout << std::endl;
	{
		double	arr[] = {1.1, 2.2, 3.3, 4.4, 42.42};

		print(arr, 5);
		iter(arr, 5, mult);
		print(arr, 5);
	}
	std::cout << std::endl;
	{
		char	arr[] = {'H', 'e', 'l', 'l', 'o'};

		print(arr, 5);
		iter(arr, 5, print);
		print(arr, 5);
	}

	return (0);
}
