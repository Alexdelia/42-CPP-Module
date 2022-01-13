/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2022/01/12 22:37:03 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5)
{
	//std::cout << typeid(this).name() <<"\tDefault constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src), _target(src.getTarget())
{
	//std::cout << typeid(this).name() <<"\tCopy constructor called" << std::endl;
	*this = src;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: Form("PresidentialPardonForm", 25, 5), _target(target)
{
	//std::cout << typeid(this).name() <<"\tDefault constructor called with name: " << name << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	//std::cout << typeid(this).name() <<"\tDestructor called for: " << getName() << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	//std::cout << typeid(this).name() <<"\tAssignment operator called" << std::endl;

	_target = rhs.getTarget();
	
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const PresidentialPardonForm &src)
{
	o << "PresidentialPardonForm, " << src.getName() << ", target: "
		<< src.getTarget() << ", Form: " << src.getForm() << std::endl;
	return (o);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::cout << "Zafod Beeblebrox pardoned " << _target << std::endl;
}

const Form	&PresidentialPardonForm::getForm(void) const
{
	return (*(Form*)this);
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}
