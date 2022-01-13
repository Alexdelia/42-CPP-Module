/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:29:55 by adelille          #+#    #+#             */
/*   Updated: 2022/01/13 13:10:55 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	bob("bob", 1);
	Intern		foo;
	Form		*scf;
	Form		*rrf;
	Form		*ppf;
	Form		*unknown;

	scf = foo.makeForm("shrubbery creation", "scf");
	std::cout << (ShrubberyCreationForm &)*scf;
	bob.signForm(*scf);
	std::cout << (ShrubberyCreationForm &)*scf;
	bob.executeForm(*scf);
	std::cout << std::endl << std::endl;

	rrf = foo.makeForm("robotomy request", "rrf");
	std::cout << (RobotomyRequestForm &)*rrf;
	bob.signForm(*rrf);
	bob.executeForm(*rrf);
	std::cout << std::endl << std::endl;

	ppf = foo.makeForm("presidential pardon", "prf");
	std::cout << (PresidentialPardonForm &)*ppf;
	bob.signForm(*ppf);
	bob.executeForm(*ppf);
	std::cout << std::endl << std::endl;

	unknown = foo.makeForm("foo bar", "unknown");
	if (unknown)
	{
		bob.signForm(*unknown);
		bob.executeForm(*unknown);
		std::cout << std::endl;
	}

	delete scf;
	delete rrf;
	delete ppf;
	delete unknown;

	return (0);
}
