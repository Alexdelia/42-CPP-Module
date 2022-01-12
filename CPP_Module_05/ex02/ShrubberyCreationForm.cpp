/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2022/01/12 13:53:25 by adelille         ###   ########.fr       */
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

	_target = rhs.getTarget();
	
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const ShrubberyCreationForm &src)
{
	o << "ShrubberyCreationForm, " << src.getName() << ", target: "
		<< src.getTarget() << ", Form: " << src.getForm() << std::endl;
	return (o);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::string		file;
	std::ofstream	ofs;

	Form::execute(executor);
	file = _target + "_shrubbery";
	ofs.open(file.c_str(), std::ios::out | std::ios::trunc);
	if (ofs.is_open())
	{
		ofs << TREE1 << std::endl;
		ofs << TREE2;
		ofs.close();
	}
	else
		std::cerr << "Error : Failed to create the schrubbery." << std::endl;
}

const Form	&ShrubberyCreationForm::getForm(void) const
{
	return (*(Form*)this);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}
