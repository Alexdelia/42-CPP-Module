/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2022/01/11 18:10:31 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
{
	//std::cout << typeid(this).name() <<"\tDefault constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src), _target(src.getTarget())
{
	//std::cout << typeid(this).name() <<"\tCopy constructor called" << std::endl;
	*this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	//std::cout << typeid(this).name() <<"\tDefault constructor called with name: " << name << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	//std::cout << typeid(this).name() <<"\tDestructor called for: " << getName() << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	//std::cout << typeid(this).name() <<"\tAssignment operator called" << std::endl;

	_sign = rhs.getSign();
	
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const ShrubberyCreationForm &src)
{
	o << src.getName() << (src.getSign() ? "\033[32m is" : "\033[31m isn't")
		<< "\033[0m signed.\t(sign grade: " << src.getGradeSign()
		<< "\texecution grade: " << src.getGradeExec() << ")" << std::endl;
	return (o);
}

const Form	ShrubberyCreationForm::getForm(void) const
{
	return (*(Form*)this);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}
