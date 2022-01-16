/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:17:30 by adelille          #+#    #+#             */
/*   Updated: 2022/01/16 19:34:02 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

#include <iostream>
#include <vector>
//#include <cstdlib>

#define SIZE	100000

int	main(void)
{
	{
		Span	sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "longest:  " << sp.longestSpan() << std::endl;

		try
		{
			sp.addNumber(42);
			sp.addNumber(43);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "longest:  " << sp.longestSpan() << std::endl << std::endl;
	}
	{
		try
		{
			Span	s(0);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{
		std::vector<int>	v;
		Span				s(SIZE + 1);

		for (int i = SIZE; i >= -SIZE; i -= 2)
			v.push_back(i);

		s.addNumbers(v.begin(), v.end());

		std::cout << "shortest: " << s.shortestSpan() << std::endl;
		std::cout << "longest:  " << s.longestSpan() << std::endl;
	}

	return (0);
}
