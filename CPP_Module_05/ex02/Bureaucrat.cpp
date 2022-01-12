/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2022/01/12 13:50:16 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(-1)
{
	//std::cout << typeid(this).name() <<"\tDefault constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	//std::cout << typeid(this).name() <<"\tCopy constructor called" << std::endl;
	*this = src;
}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade) : _name(name), _grade(grade)
{
	//std::cout << typeid(this).name() <<"\tDefault constructor called with name: " << name << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	//std::cout << typeid(this).name() <<"\tDestructor called for: " << getName() << std::endl;
}

void	Bureaucrat::upGrade(void)
{
	if (_grade > 1)
		_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::downGrade(void)
{
	if (_grade < 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cerr << getName() << " signs " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << getName() << " can't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form &f)
{
	try
	{
		f.execute(*this);
		std::cout << _name << " executs " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << _name << " can't execute " << f.getName() << " because " << e.what() << std::endl;
	}
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low, minimum grade is 150");
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high, maximum grade is 1");
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	//std::cout << typeid(this).name() <<"\tAssignment operator called" << std::endl;

	_grade = rhs.getGrade();
	
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return (o);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}
