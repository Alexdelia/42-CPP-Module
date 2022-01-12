/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2022/01/12 13:50:58 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default"), _sign(false), _grade_sign(-1), _grade_exec(-1)
{
	//std::cout << typeid(this).name() <<"\tDefault constructor called" << std::endl;
}

Form::Form(const Form &src) : _grade_sign(src.getGradeSign()), _grade_exec(src.getGradeExec())
{
	//std::cout << typeid(this).name() <<"\tCopy constructor called" << std::endl;
	*this = src;
}

Form::Form(const std::string &name, const int &grade_sign, const int &grade_exec) :
	_name(name), _sign(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	//std::cout << typeid(this).name() <<"\tDefault constructor called with name: " << name << std::endl;
	if (grade_sign > 150 || grade_exec > 150)
		throw Form::GradeTooLowException();
	else if (grade_sign < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
	return ;
}

Form::~Form(void)
{
	//std::cout << typeid(this).name() <<"\tDestructor called for: " << getName() << std::endl;
}

void	Form::beSigned(const Bureaucrat &b)
{
	if ((int)b.getGrade() <= _grade_sign)
		_sign = true;
	else
		throw Form::GradeTooLowException();
}

void	Form::execute(const Bureaucrat &executor) const
{
	if (_grade_exec < (int)executor.getGrade())
		throw Form::GradeTooLowException();
	else if (getSign() == false)
		throw Form::GradeTooLowToSign();
	return ;
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low, minimum grade is 150");
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high, maximum grade is 1");
}

const char	*Form::GradeTooLowToSign::what(void) const throw()
{
	return ("Grade too low to sign");
}

Form	&Form::operator=(const Form &rhs)
{
	//std::cout << typeid(this).name() <<"\tAssignment operator called" << std::endl;

	_sign = rhs.getSign();
	
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Form &src)
{
	o << src.getName() << (src.getSign() ? "\033[32m is" : "\033[31m isn't")
		<< "\033[0m signed.\t(sign grade: " << src.getGradeSign()
		<< "\texecution grade: " << src.getGradeExec() << ")" << std::endl;
	return (o);
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSign(void) const
{
	return (this->_sign);
}

unsigned int	Form::getGradeSign(void) const
{
	return (this->_grade_sign);
}

unsigned int	Form::getGradeExec(void) const
{
	return (this->_grade_exec);
}
