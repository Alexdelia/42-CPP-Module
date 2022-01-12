/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:29:55 by adelille          #+#    #+#             */
/*   Updated: 2022/01/12 22:49:23 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define	CATCH	catch(std::exception &e) { std::cerr << e.what() << std::endl; }

int	main(void)
{
	Bureaucrat				bob("bob", 1);
	Bureaucrat				foo("foo", 100);
	ShrubberyCreationForm	scf("scf");
	RobotomyRequestForm		rrf("rrf");
	PresidentialPardonForm	prf("prf");

	std::cout << "\tShrubberyCreationForm" << std::endl << std::endl;
	foo.signForm(scf);
	bob.executeForm(scf);
	std::cout << std::endl;
	
	std::cout << "\tRobotomyRequestForm" << std::endl << std::endl;
	foo.signForm(rrf);
	bob.executeForm(rrf);
	std::cout << std::endl;
	bob.signForm(rrf);
	bob.executeForm(rrf);
	std::cout << std::endl;

	std::cout << "\tPresidentialPardonForm" << std::endl << std::endl;
	bob.signForm(prf);
	bob.executeForm(prf);

	return (0);
}
