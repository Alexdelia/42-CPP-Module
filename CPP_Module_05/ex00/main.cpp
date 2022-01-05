/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:29:55 by adelille          #+#    #+#             */
/*   Updated: 2022/01/05 08:05:12 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define	CATCH	catch(std::exception &e) { std::cerr << e.what() << std::endl; }

int	main(void)
{
	try
	{
		Bureaucrat	bob("bob", 42);
		Bureaucrat	bob_limit_high("bob_limit_high", 1);
		Bureaucrat	bob_limit_low("bob_limit_low", 150);

		std::cout << bob;
		try
		{
			bob.upGrade();
			std::cout << bob;
			bob.downGrade();
			std::cout << bob;
			bob.downGrade();
			std::cout << bob;
		}
		CATCH

		std::cout << std::endl << bob_limit_high;
		try
		{
			bob_limit_high.upGrade();
		}
		CATCH

		std::cout << std::endl << bob_limit_low;
		try
		{
			bob_limit_low.downGrade();
		}
		CATCH

		std::cout << std::endl << bob << bob_limit_high << bob_limit_low;
	}
	CATCH

	std::cout << std::endl << "try to create too high and too low grade" << std::endl;
	try
	{
		Bureaucrat	bob_too_high("bob_too_high", 0);
		std::cout << bob_too_high;
	}
	CATCH
	try
	{
		Bureaucrat	bob_too_low("bob_too_low", 151);
		std::cout << bob_too_low;
	}
	CATCH
	return (0);
}
