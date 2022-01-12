/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:14:18 by adelille          #+#    #+#             */
/*   Updated: 2022/01/12 22:37:50 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
//# include <typeinfo>
# include <exception>
# include <stdlib.h>

# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(const std::string &_target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		virtual ~RobotomyRequestForm(void);
		
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);

		const Form		&getForm(void) const;
		std::string		getTarget(void) const;
		virtual void	execute(const Bureaucrat &executor) const;

	private:
		RobotomyRequestForm(void);
		std::string	_target;
};

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const &src);

#endif
