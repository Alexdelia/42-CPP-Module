/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:17:30 by adelille          #+#    #+#             */
/*   Updated: 2022/01/16 19:01:35 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>
#include <vector>

bool	test(std::vector<int> v, int n)
{
	try
	{
		std::vector<int>::iterator i = easyfind(v, n);
		std::cout << "i = " << *i << "\t\t(" << n << ")" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\t(" << n << ")"<< std::endl;
		return (false);
	}
	return (true);
}

int	main(void)
{
	std::vector<int>	v;

	v.push_back(1);
	v.push_back(42);
	v.push_back(-21);
	v.push_back(84);

	test(v, 42);
	test(v, 60);
	test(v, -84);
	test(v, 1);

	return (0);
}
