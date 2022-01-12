/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:29:55 by adelille          #+#    #+#             */
/*   Updated: 2022/01/12 13:47:54 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

#define	CATCH	catch(std::exception &e) { std::cerr << e.what() << std::endl; }

int	main(void)
{
	std::cout << "ShrubberyCreationForm" << std::endl << std::endl;

	Bureaucrat				bob("bob", 1);
	Bureaucrat				foo("foo", 100);
	ShrubberyCreationForm	scf("scf");

	foo.signForm(scf);
	bob.executeForm(scf);
	std::cout << std::endl;

	return (0);
}
