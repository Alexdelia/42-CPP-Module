/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2022/01/12 22:33:26 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

int	rand_seed = 0;

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45)
{
	//std::cout << typeid(this).name() <<"\tDefault constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src), _target(src.getTarget())
{
	//std::cout << typeid(this).name() <<"\tCopy constructor called" << std::endl;
	*this = src;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: Form("RobotomyRequestForm", 72, 45), _target(target)
{
	//std::cout << typeid(this).name() <<"\tDefault constructor called with name: " << name << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	//std::cout << typeid(this).name() <<"\tDestructor called for: " << getName() << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	//std::cout << typeid(this).name() <<"\tAssignment operator called" << std::endl;

	_target = rhs.getTarget();
	
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const RobotomyRequestForm &src)
{
	o << "RobotomyRequestForm, " << src.getName() << ", target: "
		<< src.getTarget() << ", Form: " << src.getForm() << std::endl;
	return (o);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	if (rand_seed == 0 || rand_seed != time(NULL))
		srand(time(NULL));
	std::cout << "*drill sound*\tRobotomy on " << _target;
	if (rand() % 2 == 1)
		std::cout << " succeed." << std::endl;
	else
		std::cout << " failed." << std::endl;
}

const Form	&RobotomyRequestForm::getForm(void) const
{
	return (*(Form*)this);
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}
