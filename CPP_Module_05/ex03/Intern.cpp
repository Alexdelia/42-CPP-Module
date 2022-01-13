/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2022/01/13 13:02:44 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	//std::cout << typeid(this).name() <<"\tDefault constructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
	//std::cout << typeid(this).name() <<"\tCopy constructor called" << std::endl;
	*this = src;
}

Intern::~Intern(void)
{
	//std::cout << typeid(this).name() <<"\tDestructor called for: " << getName() << std::endl;
}

Intern	&Intern::operator=(const Intern &rhs)
{
	//std::cout << typeid(this).name() <<"\tAssignment operator called" << std::endl;

	(void)rhs;
	
	return (*this);
}

static Form	*makeSCF(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static Form	*makeRRF(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*makePPF(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(const std::string form, const std::string target) const
{
	t_type	t[] =
	{
		{"shrubbery creation", makeSCF},
		{"robotomy request", makeRRF},
		{"presidential pardon", makePPF}
	};
	int		i;

	i = 0;
	while (i < NB_FORM && t[i].name.compare(form))
		i++;
	if (i < NB_FORM)
	{
		std::cout << "Intern creates " << form << std::endl;
		return (t[i].f(target));
	}
	else
	{
		std::cerr << "Form " << form << " doesn't exist" << std::endl;
		return (NULL);
	}
}
